// 주어진 실수를 제곱하여 반환하는 함수 double square(double)을 작성한다

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double square(double x, double y);

int main()
{
	int num1, num2 = 0;

	printf("정수를 입력하시오: ");
	scanf("%d", &num1);

	square(num1, num2);

	return 0;
}

double square(double x, double y)
{
	y = x * x;

	printf("주어진 정수 %lf의 제곱은 %lf입니다.\n", x, y);

	return 0;
}