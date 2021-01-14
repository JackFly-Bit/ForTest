#include "contact.h"

void ShowMenu()
{
	printf("###########################\n");
	printf("# 1.Add   2.Del  3.Search #\n");
	printf("# 4.Mod   5.Show 6.Clear  #\n");
	printf("# 7.Sort         0.Exit   #\n");
	printf("###########################\n");
	printf("Please Select# ");
}

int main()
{
	//通讯录 
	//要求：可以用来存储1000个人的信息，每个人的信息包括：姓名、性别、年龄、电话、住址
	//提供方法：1.添加联系人信息
	//			2.删除指定联系人信息
	//			3.查找指定联系人信息
	//			4.修改指定联系人信息
	//			5.显示所有联系人信息
	//			6.清空所有联系人
	//			7.以名字排序所有联系人
	contact_t* ct = NULL;
	InitContact(&ct);
	int quit = 0;
	while (!quit){
		int select = 0;
		ShowMenu();
		scanf("%d", &select);

		switch (select){
		case 1://Add
			AddFriend(&ct);//添加用户是要进行自动扩容的！
			break;
		case 2://Del
			DelFriend(ct);
			break;
		case 3://Search
			SearchFriend(ct);
			break;
		case 4://Mod
			break;
		case 5://Show
			ShowContact(ct);
			break;
		case 6://Clear
			ClearContact(ct);
			break;
		case 7://Sort
			SortContact(ct);
			break;
		case 0://Exit
			SaveContact(ct);
			quit = 1;
			break;
		default://do nothing!
			break;
		}
	}
	free(ct);
	//printf("hello contact!\n");
	system("pause");
	return 0;
}