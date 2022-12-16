// 사용자로부터 입력받은 문자열에 포함된 공백을 모두 삭제하는 함수를 작성하는 프로그램
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
void string_chr(char* str);

int main()
{
	char str[100];
	printf("공백 문자가 있는 문자열을 입력하시오: ");
	// 한 줄의 문자열을 읽어서 문자 배열에 저장
	// gets_s()는 표준 입력으로부터 줄바꿈 문자가 나올 때까지 한 줄의 라인을 문자열로 입력받는다.
	// -> 한 줄의 입력을 받아서 줄바꿈 문자를 NULL로 변환하여 배열에 저장
	gets_s(str, 100);

	string_chr(str);

	return 0;
}

void string_chr(char* str)
{
	
	int i = 0;
	
	while (str[i] != NULL) {
		if (str[i] != ' ') {
			printf("%c", str[i]);
		}
		i++;
	}
}