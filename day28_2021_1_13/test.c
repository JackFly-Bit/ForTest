#include <stdio.h>
#include <windows.h>

#pragma warning (disable:4996)

int main()
{
	FILE* src = fopen("�й�.JPG", "rb");
	if (src == NULL){
		perror("fopen");
		return 1;
	}
	FILE* dst = fopen("�й�_copy.JPG", "wb");
	if (dst == NULL){
		perror("fopen");
		return 2;
	}
	char buf[1024];
	int n = 0;
	while ((n = fread(buf, 1, 1024, src)) > 1){
		fwrite(buf, 1, n, dst);
	}
	if (feof(src)){
		printf("read src file end!\n");
	}

	//1.�ж��ļ���ȡ����
	//2.�ж�����ԭ��
	//feof -> file end of file

	//FILE* fp = fopen("log.txt", "w");
	//if (fp == NULL){
	//	printf("fopen error!\n");
	//	return 1;
	//}
	//printf("begin: %d\n", ftell(fp));
	//fputs("hello world, hello bit!", fp);
	//printf("end: %d\n", ftell(fp));

	//printf("seek before: %d\n", ftell(fp));
	////fseek(fp, 0, SEEK_SET);//����дλ�ûָ����ʼ �൱�ڣ�rewind(fp);
	////fputs("HELLO", fp);
	//fseek(fp,-4, SEEK_END);//SEEK_END+XX
	//fputs("1234", fp);
	//printf("seek after: %d\n", ftell(fp));
	////char c = 0;
	////printf("%d\n", ftell(fp));
	////while ((c = fgetc(fp)) != EOF){
	////	printf("%d\n", ftell(fp));
	////}
	//fclose(fp);
	//////////////////////////////////////////////////
	////1.
	//FILE* src = fopen("�й�.JPG", "rb");
	//if (src == NULL){
	//	perror("fopen");
	//	return 1;
	//}
	//FILE* dst = fopen("�й�_copy.JPG", "wb");
	//if (dst == NULL){
	//	perror("fopen");
	//	return 2;
	//}
	////2.copy
	//fseek(src, 0, SEEK_END);//��src��Ӧ�Ķ�ȡλ�����õ����β
	//int size = ftell(src);//��ý�βƫ��������������ļ��Ĵ�С������
	//rewind(src);//��src��Ӧ�Ķ�ȡλ�ûָ�����ʼ

	//char* file_content = (char*)malloc(size);
	//if (file_content == NULL){
	//	perror("malloc");
	//	return 3;
	//}

	//fread(file_content, size, 1, src);//���ļ����������ݶ�ȡ��file_content��
	//fwrite(file_content, size, 1, dst);
	////3.close
	//fclose(src);
	//fclose(dst);
	//free(file_content);
	//////////////////////////////////////////////////
	//while (1){
	//	char c = fgetc(fp);
	//	if (c == EOF){
	//		break;
	//	}
	//	printf("%c", c);
	//}//�п���һ��ʼ����-1���³����˳������Բ���ȡ

	//int a = 0;
	//double d = 0.0;
	//char c = 'a';
	//fscanf(fp, "%d %lf %c", &a, &d, &c);
	////fscanf(stdin, "%d %lf %c", &a, &d, &c);//scanf("%d %f %c", &a, &d, &c);
	//printf("%d, %f, %c\n", a, d, c);

	//int a = 10;
	//double d = 3.14;
	//char c = 'c';
	//fprintf(stdout, "a: %d, b: %f, c: %c\n", a, d, c);
	//fprintf(fp, "a: %d, b: %f, c: %c\n", a, d, c);

	//char buffer[1024];
	//char* ret;
	//do{
	//	ret = fgets(buffer, 1024, stdin);
	//	if (ret == NULL){
	//		break;
	//	}
	//	fputs(buffer, fp);
	//} while (1);

	//char c = 'a';
	//while ((c = fgetc(stdin)) != EOF){
	//	fputc(c, fp);//�ļ�������ctrl+Z
	//}

	//char c = 'a';
	//while ((c = fgetc(fp)) != EOF){//EOF == -1
	//	printf("read: %c\n", c);
	//}
	//printf("%d\n", c);

	//char c = 'a';
	//for (; c <= 'z'; c++){
	//	fputc(c, fp);
	//	fputc(c, stdout);
	//}
	
	//fputs("abcd 1234", fp);//stdin,stdout,stderr
	//printf("hello %d,%c\n", 10, 'c');
	//fputs("hello %d,%c\n", stdout);

	system("pause");
	return 0;
}