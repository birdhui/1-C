// C_Express_8_programming_03
// 전달된 문자가 알파벳 문자인지 아닌지를 검사하는 함수 check_alpha()를 작성하고
// 이것을 호출해 사용자가 입력한 문자가 알파벳 (a에서 z까지)인지를 판단하여 출력하는 프로그램 작성

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

check_alpha(char text);

int main()
{
	char alpha;

	printf("문자를 입력하시오: ");
	scanf("%c", &alpha);

	check_alpha(alpha);

	return 0;
}

check_alpha(char text)
{
	if (text >= 97 && text <= 122) {
		printf("%c는 알파벳 문자입니다.\n", text);
	}
	else
	printf("%c는 알 수 없는 문자입니다.\n", text);
}