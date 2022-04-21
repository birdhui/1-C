#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1, num2;
	double num3, sum, avg;

	printf("실수를 입력하시오: ");
	scanf("%d", &num1);

	printf("실수를 입력하시오: ");
	scanf("%d", &num2);

	printf("실수를 입력하시오: ");
	scanf("%lf", &num3);

	sum = num1 + num2 + num3;
	avg = sum / 3.0;

	printf("합은 %lf이고, 평균은 %lf입니다. \n", sum, avg);

	return 0;
}