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
	//ͨѶ¼ 
	//Ҫ�󣺿��������洢1000���˵���Ϣ��ÿ���˵���Ϣ�������������Ա����䡢�绰��סַ
	//�ṩ������1.�����ϵ����Ϣ
	//			2.ɾ��ָ����ϵ����Ϣ
	//			3.����ָ����ϵ����Ϣ
	//			4.�޸�ָ����ϵ����Ϣ
	//			5.��ʾ������ϵ����Ϣ
	//			6.���������ϵ��
	//			7.����������������ϵ��
	contact_t* ct = NULL;
	InitContact(&ct);
	int quit = 0;
	while (!quit){
		int select = 0;
		ShowMenu();
		scanf("%d", &select);

		switch (select){
		case 1://Add
			AddFriend(&ct);//����û���Ҫ�����Զ����ݵģ�
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