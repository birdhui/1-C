// 문자 단위 입출력
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	FILE* fp = NULL;
	fp = fopen("sample.txt", "w");	// w: 쓰기 모드

	if (fp == NULL)
		printf("파일 열기 실패\n");
	else
		printf("파일 열기 성공\n");

	fputc('a', fp);	// fputc()함수를 이용해 하나의 문자를 fp가 가리키는 파일에 쓴다.
	fputc('b', fp);	// sample.txt를 열어보면 abc가 써져있다.
	fputc('c', fp);
	fclose(fp);

	return 0;
}