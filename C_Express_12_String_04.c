// 함수를 이용해 입력받은 문자열 안에 있는 문자의 빈도수를 세는 프로그램
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int str_chr(char* s, int c);

int main()
{
	char string[100];
	int ch;

	printf("문자열을 입력하시오: ");
	// 문자열을 읽어서 배열에 저장하는 함수
	gets(string);

	for (ch = 'a'; ch <= 'z'; ch++) {
		printf("%c: %d\n", ch, str_chr(string, ch));
	}

	return 0;
}

int str_chr(char* s, int *c)
{
	int i, count = 0;

	for (i = 0; s[i] != NULL; i++) {	// 배열 s[i]가 NULL이 아니라면
		if (s[i] == c)	// s[i]가 찾으려는 문자 c라면
			count++;	// count값을 증가시켜라
	}
	return count;		// count값을 반환

}