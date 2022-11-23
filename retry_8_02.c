// 알파벳 문자인지 아닌지를 검사 check_alpha()를 작성하고 호출

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void check_alpha(char ch);

int main()
{
	char ch;

	printf("문자를 입력하시오: ");
	scanf("%c", &ch);

	check_alpha(ch);

	return 0;
}

void check_alpha(char ch)
{
	// 97~122 (영어 소문자)
	/*
	for (int i = 97; i <= 122; i++) {
		if (i == ch) {
			printf("%c는 알파벳 문자입니다.\n", ch);
		}
	}
	*/

	// if문으로 풀기
	if (ch >= 97 && ch <= 122) {
		printf("%c는 알파벳 문자입니다.\n", ch);
	}
	else
		printf("%c는 알파벳 문자가 아닙니다.\n", ch);

}