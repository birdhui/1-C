// fgetc()를 사용해 이전에 저장했던 파일의 내용을 화면에 표시해보자

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int c;
	FILE* fp = NULL;
	fp = fopen("sample.txt", "r");	// r : 읽기 모드, 화면에 출력

	if (fp == NULL)
		printf("파일 열기 실패\n");
	else
		printf("파일 열기 성공\n");

	// fgetc() : 지정된 파일로부터 단일 문자를 입력받는 함수
	// EOF(End of File) : 파일의 끝을 나타내는 특수 문자, -1이다.
	while ((c = fgetc(fp)) != EOF) {
		putchar(c);
	}
	fclose(fp);
	printf("\n");

	return 0;
}