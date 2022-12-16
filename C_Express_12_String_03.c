// 함수를 이용해 입력받은 문자열 안에 특정된 문자의 개수를 세는 프로그램
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int str_chr(char* s, int c);

int main()
{
	char string[100];
	char str;

	printf("문자열을 입력하시오: ");
	// 문자열을 읽어서 배열에 저장하는 함수
	gets_s(string, 100);
	printf("개수를 셀 문자를 입력하시오: ");
	scanf("%c", &str);	// 배열이 아니기 때문에 & 잊지 말고 꼭 붙여주기!!

	printf("%c의 개수: %d", str, str_chr(string, str));

	return 0;
}

int str_chr(char* s, int c)
{
	int i, count = 0;

	for (i = 0; s[i] != NULL; i++) {	// 배열 s[i]가 NULL이 아니라면
		if (s[i] == c)	// s[i]가 찾으려는 문자 c라면
			count++;	// count값을 증가시켜라
	}
	return count;		// count값을 반환
}