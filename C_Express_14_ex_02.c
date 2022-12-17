// 파일 삭제하기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	if (remove("sample.txt") == -1)
		printf("sample.txt를 삭제할 수 없습니다.\n");
		// 파일이 .c 파일 위치에 있다면 삭제됨
	else
		printf("sample.txt를 삭제했습니다.\n");

	return 0;
}