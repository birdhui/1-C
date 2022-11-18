#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 조건문 윤년 구하기
/*
	윤년 => 4년마다, 그렇지만 100년 단위일 때는 윤년에 해당하지 않도록
	윤년 => 400년 단위일 때는 어떤 상황이든간에 윤년으로 설정한다.
*/

int main()
{
	int year;
	printf("년도를 입력해주세요 : ");
	scanf("%d", &year);

	if ((year % 4 == 0 && year != 0) || (year % 400 == 0)) {
		printf("%d는 윤년입니다.\n", year);
	}
	else
		printf("%d는 윤년이 아닙니다.\n", year);

	return 0;
}