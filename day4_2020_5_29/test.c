#include <stdio.h>
#include <windows.h>

#pragma warning (disable:4996)

//���룺_x������1��,_y������2��
//���أ��ӷ�����֮��Ľ��
 
//int MyAdd(int _x, int _y)
//{
//	int _z = _x + _y;
//	return _z;
//}

//int//����ֵ���ú����Ƿ���óɹ� MyMul//������������֪��()//�β��б�{
//	int x = 0;//�����壺�����
//	int y = 0;
//	printf("�������������֣�<x,y>:");
//	scanf("%d %d", &x, &y);
//	int z = x + y;
//	return z;
//}
//int MyAdd(){
//	int x = 0;
//	int y = 0;
//	printf("�������������֣�<x,y>:");
//	scanf("%d %d",&x,&y);
//	int z = x * y;
//	return z;
//}
int MyMax(){
	int x = 0;
	int y = 0;
	printf("��������������<x,y>");
	scanf("%d %d",&x,&y);
	if (x > y){
		return x;
	}else 
		return y;
}
int main()
 {
	while (1){
	int result = MyMax();
	printf("%d\n",result);
	}
//	//�����������ϣ��������������ǵĴ�������нṹ�ԡ��ÿ�
//    //      ά���ԣ���������Ŀ�ά����
//	int result = MyMul();
//	printf("%d\n",result);
//	result = MyAdd();
//	printf("%d\n",result);

	//printf("�������������֣�<x,y>:");
	//int x = 0;
	//int y = 0;
	//scanf("%d %d",&x,&y);

	//int z = x * y;

	//printf("%d * %d = %d\n",x,y,z);

	//printf("�������������֣�<x,y>:");
	//scanf("%d %d", &x, &y);

	//z = x + y;

	//printf("%d + %d = %d\n", x, y, z);

	//int i = 0;
	//printf("1:&i = %p\n",&i);
	//for (int i = 0; i < 1; i++){
	//	printf("2:&i = %p\n",i, &i);
	//}
	//printf("--------------------%d,%p\n", i,&i);

	//printf("������أ�\n");
	//int line = 0;
	//while (line <=600){
	//	printf("coding...%d\n",line);
	//	line++;
	//}
	//if (line > 600){
	//	printf("��ϲ��ϲ��offer!\n");
	//	printf("��ϲ��ϲ��offer!\n");
	//	printf("��ϲ��ϲ��offer!\n");
	//	printf("��ϲ��ϲ��offer!\n");
	//}

	//do{
	//	printf(".");
	//} while (0);

	//int i = 0;
	//do {
	//	printf("%d\n",i);
	//} while (0);

	//for (;;){
	//	printf(".");
	//}

	//int i = 0;
	//for (int i = 0; i < 10; i++){
	//	printf("%d\n",i);
	//	Sleep(1000);
	//}

	//while (1.5){
	//	printf(".");
	//}

	//int i = 0;//ѭ��������ʼ��
	//while (i < 10){//ѭ���������ж�
	//	printf("%d\n",i);
	//	i ++;//ѭ�������ĸ���
	//	/*i += 1;*/
	//	/*i = i + 1*/
	//	Sleep(1000);//1S = 1000���� = 1000000΢�� = ? ����
	//}

	//while (1){
	//	printf("���������ѡ��<1 or 2>");
	//	int select = 0;
	//	scanf("%d", &select);
	//	if (1 == select){
	//		printf("offer\n");
	//	}
	//	else if (2 == select){
	//		printf("������\n");
	//	}
	//	else {
	//		printf("��������\n");
	//	}
	//}

	//printf("hello world\n");
	//printf("hello world\n");
	//if (0){//if(0)�ܴﵽע��Ч��������ǿ�Ҳ��Ƽ���
	//	printf("hello world\n");
	//	printf("hello world\n");
	//	printf("hello world\n");
	//	printf("hello world\n");
	//}

	//int select = 0;
	//printf("���������ѡ��<1 or 2>");
	//scanf("%d",&select);

	//printf("%d\n",select == 10);
	//if (1 == select){//C����ʲôΪ�棨��0����ʲôΪ��(0)��
	//	printf("OK!\n");//bool
	//}
	//else if (2 == select){
	//	printf("ok!\n");
	//}
	//else {
	//	printf("AAA\n");
	//	//if (select == 3){

	//	//}
	//	//else if (select > 5)
	//}
	//int x = 0;
	//int y = 0;
	//printf("please enter your data <x,y>");
	//scanf("%d %d",&x,&y);

	////MyAdd����
	//int result = MyAdd(x,y);
	////int result = MySub(x, y);
	////int result = MyMul(x, y);
	////int result = MyDiv(x, y);

	//printf("%d + %d = %d\n", x, y, result);

	//printf("%d\n",strlen("abcdfef"));
	////\32�����ͳ�һ��ת���ַ�
	//printf("%d\n",strlen("c:\test\328\test.c"));

	//printf("%d\n",strlen("abce"));
	//printf("%d\n", sizeof("abce"));

	//printf("%c\n",'\'');
	//printf("%s\n","\"");

	//char c = '\n';
	//printf("%d\n",sizeof(c));

	//printf("\\");

	//char *s = "c:\code\test.c";
	//printf("%s\n",s);

	//printf("a\"\n");
	//printf("a\n");
	//printf("a\n");
	//printf("a\n");

	//char arr1[] = "bit";
	//char arr2[] = { 'b', 'i', 't' };
	//char arr3[] = { 'b', 'i', 't' ,'\0'};

	//printf("%s\n", arr1);
	//printf("%s\n", arr2);
	//printf("%s\n", arr3);

	//"abc"
	//char *s = "abc";
	//char str[] = "abc";
	//printf("abc");

	//printf("%d\n",sizeof("ABC"));
	//printf("hello bit!\n");
	//"ABC";
	//"A";
	//"";
	//"1234";
	system("pause");

	return 0;
}