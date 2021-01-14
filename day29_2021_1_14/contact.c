#include "contact.h"

void InitContact(contact_t** ct)
{
	FILE* fp = fopen(SAVE_FILE, "rb");
	if (fp == NULL){
		*ct = (contact_t*)malloc(sizeof(contact_t)+INIT_NUM*sizeof(person_t));
		if (*ct == NULL){
			perror("malloc");
			exit(1);
		}
		(*ct)->size = 0;
		(*ct)->cap = INIT_NUM;
		printf("Using Default Init!\n");
	}
	else{
		contact_t temp;
		fread(&temp, sizeof(contact_t), 1, fp);//temp.cap,temp.size
		*ct = (contact_t*)malloc(sizeof(contact_t)+temp.cap*sizeof(person_t));
		if (*ct == NULL){
			perror("malloc");
			exit(2);
		}
		memcpy(*ct, &temp, sizeof(contact_t));
		fread((*ct)->friends, sizeof(person_t), (*ct)->size, fp);
		printf("Using Save.txt Init!\n");
		fclose(fp);
	}
}
static int IsExist(contact_t* ct, person_t* p)
{
	assert(ct);
	assert(p);
	int i = 0;
	for (; i < ct->size; i++){
		if (strcmp(ct->friends[i].name, p->name) == 0){
			return 1;//exist
		}
	}
	return 0;
}
static int IsFull(contact_t* ct)
{
	return ct->cap == ct->size;
}
static int IsEmpty(contact_t* ct)
{
	return ct->size == 0;
}
static int Inc(contact_t** ct)
{
	assert(ct);
	contact_t* ct_temp = (contact_t*)realloc(*ct, sizeof(contact_t) + ((*ct)->cap+INC_SIZE)*sizeof(person_t));
	if (ct_temp == NULL){
		return 0;
	}
	*ct = ct_temp;
	(*ct)->cap += INC_SIZE;
	printf("自动扩容成功!\n");
	return 1;
}
void AddFriend(contact_t** ct)
{
	assert(ct);
	//if (IsFull()){
	//	if (Inc()){
	//	}
	//}
	//通讯录已经满了呢?自动扩容!
	if (!IsFull(*ct) || Inc(ct)){//如果没有满，则进行后续插入，如果满了，自动扩容&&扩容成功
		//1.没有满
		//2.扩容成功
		person_t p;
		printf("请输入新增用户的姓名# ");
		scanf("%s", p.name);//name是一个数组哦
		printf("请输入新增用户的性别# ");
		scanf("%s", p.sex);
		printf("请输入新增用户的年纪# ");
		scanf("%d", &(p.age));
		printf("请输入新增用户的电话# ");
		scanf("%s", p.telphone);
		printf("请输入新增用户的地址# ");
		scanf("%s", p.address);
		//判定当前用户是否已经存在?
		if (IsExist(*ct, &p)){
			printf("%s 已经存在，请不要重复插入!\n", p.name);
			return;
		}
		//(*ct)->friends[(*ct)->size] = p;
		memcpy((*ct)->friends + (*ct)->size, &p, sizeof(p));
		(*ct)->size += 1;
		printf("新增用户 %s 成功!\n", p.name);
	}
	else{
		printf("扩容失败！\n");
	}
}
//typedef struct person{
//	char name[NAME_SIZE];
//	char sex[SEX_SIZE];
//	int age;
//	char telphone[TELPHONE_SIZE];
//	char address[ADDRESS_SIZE];
//}person_t;
static int SearchCore(contact_t* ct, const char* name)
{
	assert(ct);
	assert(name);
	int i = 0;
	for (; i < ct->size; i++){
		person_t* p = ct->friends + i;
		if (strcmp(name, p->name) == 0){
			return i;
		}
	}
	return -1;
}
void SearchFriend(contact_t* ct)
{
	assert(ct);
	printf("请输入你要查找的人的姓名# ");
	char name[NAME_SIZE];
	scanf("%s", name);
	int i = SearchCore(ct, name);
	if (i >= 0){
		person_t* p = ct->friends + i;
		printf("|%-10s|%-10s|%-10d|%-10s|%-10s|\n", p->name, p->sex, p->age, p->telphone, p->address);
	}
	else{
		printf("你要查找的人 %s 不存在!\n", name);
	}
	return;
}
void ClearContact(contact_t* ct)
{
	assert(ct);
	ct->size = 0;
}
void DelFriend(contact_t* ct)
{
	assert(ct);
	printf("请输入你要删除的人的姓名# ");
	char name[NAME_SIZE];
	scanf("%s", name);
	int i = SearchCore(ct, name);
	if (i >= 0){
		//将最后的人的信息覆盖到当前位置
		ct->friends[i] = ct->friends[ct->size - 1];
		ct->size -= 1;
	}
	else{
		printf("你要删除的人 %s 不存在!\n", name);
	}
}
void ShowContact(contact_t* ct)
{
	assert(ct);
	int i = 0;
	printf("\n| cap: %6d | size: %6d |\n\n", ct->cap, ct->size);
	printf("|%-10s|%-10s|%-10s|%-10s|%-10s|\n", "姓名", "性别", "年纪", "电话", "地址");
	for (; i < ct->size; i++){
		person_t* p = ct->friends + i;
		printf("|%-10s|%-10s|%-10d|%-10s|%-10s|\n", p->name, p->sex, p->age, p->telphone, p->address);
	}
	printf("\n");
}

static int CmpPerson(const void* p1,const void* p2)
{
	assert(p1);
	assert(p2);
	person_t* _p1 = (person_t*)p1;
	person_t* _p2 = (person_t*)p2;
	return strcmp(_p1->name, _p2->name);//1,0,-1
}
void SortContact(contact_t* ct)
{
	assert(ct);
	if (!IsEmpty(ct)){
		qsort(ct->friends, ct->size, sizeof(person_t), CmpPerson);
	}
}
void SaveContact(contact_t* ct)
{
	assert(ct);
	FILE* fp = fopen(SAVE_FILE, "w");
	if (fp == NULL){
		printf("save error!\n");
		return;
	}
	fwrite(ct, sizeof(contact_t), 1, fp);
	fwrite(ct->friends, sizeof(person_t), ct->size, fp);
	fclose(fp);
}