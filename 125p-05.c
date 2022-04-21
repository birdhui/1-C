#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double x, result;

	printf("실수를 입력하세요: ");
	scanf("%lf", &x);

	result = 3 * (x * x) + 7 * x + 11;

	printf("다항식의 값은 %lf", result);

	return 0;
}