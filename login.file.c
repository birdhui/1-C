#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
typedef struct member {
	char name[10];
	char pwd[10];
}Member;

int main()
{
	// Member member = { "sehui", "1234" };
	char id[10] = { 0 }, pwd[10] = { 0 }, c[10];

	FILE* fp = NULL;

	fp = fopen_s(&fp, "log.txt", "w");


	if (fp == NULL) {
		perror("파일 열기 실패");
	}

	fclose(fp);

	/*
	for (int i = 0; i < 10; i++) {
		fprintf(fp, "%s %s", id[i], pwd[i]);
	}
	*/
	
	/*
	while ((c = fgetc(fp)) != EOF) {
		printf("%c", c);
	}
	: r 
	*/

	fclose(fp);
}