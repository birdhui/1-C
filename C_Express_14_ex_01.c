// 파일 열기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// FILE을 가리키는 포인터 fp선언
	FILE* fp = NULL;
	// fopen()함수를 호출하여 "sample.txt"인 파일을 연다.
	// 만약 같은 이름의 파일이 있다면 기존의 내용이 지워지고, 파일이 없으면 새로 만들어진다.
	fp = fopen("sample.txt", "w");

	if (fp == NULL)
		printf("파일 열기 실패\n");
	else
		printf("파일 열기 성공\n");
	
	// fopen()을 호출했으면 반드시 fclose()로 파일을 닫아야 한다.
	fclose(fp);

	return 0;
}