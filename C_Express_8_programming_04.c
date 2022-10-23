// C_Express_8_programming_04
// 윤년을 구하는 알고리즘을 함수 is_leap(int year) 로 작성하고
// 이 함수를 사용해 사용자가 입력한 연도가 윤년인지를 출력하는 프로그램을 작성하라

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

is_leap(int year);

int main()
{
	int y;

	printf("연도를 입력하시오: ");
	scanf("%d", &y);

	is_leap(y);

	return 0;
}

is_leap(int year)
{
	if (year % 4 == 0 &&  year % 100 != 0 || year % 400 == 0) {
		printf("%d년은 366일입니다.\n", year);
	}
	else
		printf("%d년은 365일입니다.\n", year);
}