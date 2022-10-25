// 08_04
// 8장 함수 손코딩 복습

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_leap(int year);

int main()
{
	int year;

	printf("연도를 입력하세요: ");
	scanf("%d", &year);

	is_leap(year);

	return 0;
}

int is_leap(int year)
{
	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)) {
		printf("%d년는 366일입니다.\n", year);
	}
	else
		printf("%d년는 365일입니다.\n", year);

	return 0;
}