// 08_05
// 8장 함수 손코딩 복습

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double round(double f);

int main()
{
	double f;

	printf("실수를 입력하시오: ");
	scanf("%lf", &f);

	printf("반올림한 값은 %lf입니다.\n", round(f));

	return 0;
}

double round(double f)
{
	return (int)(f + 0.5);
}