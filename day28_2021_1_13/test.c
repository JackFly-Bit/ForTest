#include <stdio.h>
#include <windows.h>

#pragma warning (disable:4996)

int main()
{
	FILE* src = fopen("中国.JPG", "rb");
	if (src == NULL){
		perror("fopen");
		return 1;
	}
	FILE* dst = fopen("中国_copy.JPG", "wb");
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

	//1.判定文件读取结束
	//2.判定结束原因
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
	////fseek(fp, 0, SEEK_SET);//将读写位置恢复到最开始 相当于：rewind(fp);
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
	//FILE* src = fopen("中国.JPG", "rb");
	//if (src == NULL){
	//	perror("fopen");
	//	return 1;
	//}
	//FILE* dst = fopen("中国_copy.JPG", "wb");
	//if (dst == NULL){
	//	perror("fopen");
	//	return 2;
	//}
	////2.copy
	//fseek(src, 0, SEEK_END);//将src对应的读取位置设置到最结尾
	//int size = ftell(src);//获得结尾偏移量，代表就是文件的大小！！！
	//rewind(src);//将src对应的读取位置恢复到开始

	//char* file_content = (char*)malloc(size);
	//if (file_content == NULL){
	//	perror("malloc");
	//	return 3;
	//}

	//fread(file_content, size, 1, src);//将文件的所有内容读取到file_content中
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
	//}//有可能一开始就是-1导致程序退出，所以不可取

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
	//	fputc(c, fp);//文件结束用ctrl+Z
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