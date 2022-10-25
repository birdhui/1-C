// 08_01
// 8장 함수 손코딩 복습

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double square(double num);

int main()
{
	double num;

	printf("정수를 입력하시오: ");
	scanf("%lf", &num);

	printf("주어진 정수 %lf의 제곱을 %lf입니다.\n", num, square(num));

	return 0;
}

double square(double num)
{
	return num * num;
}