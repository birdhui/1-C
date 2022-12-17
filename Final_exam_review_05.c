// 회문 찾기 프로그램 (Palindroms))
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
void palindrome(char *p);

int main()
{
	char s[100];

	printf("문자열 입력: ");
	scanf("%s", s);

	palindrome(s);

	return 0;
}

void palindrome(char *p)
{
	int i, len;

	len = strlen(p);

	for (i = 0; i < len / 2; i++) {
		if (p[i] != p[len - 1 - i]) {
			printf("회문이 아님\n");
			break;
		}
		else
			printf("회문임\n");
			break;
	}
}