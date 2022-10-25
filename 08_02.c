// 08_02
// 8장 함수 손코딩 복습

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int check_alpha(char alpha);

int main()
{
	char alpha;

	printf("문자를 입력하시오: ");
	scanf("%c", &alpha);

	check_alpha(alpha);

	return 0;
}

int check_alpha(char alpha)
{
	for (int i = 97; i <= 122; i++) {
		if (alpha == i) {
			printf("%c는 알파벳 문자입니다.\n", alpha);
		}
	}

	return 0;
}