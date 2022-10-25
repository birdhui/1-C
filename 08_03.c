// 08_03
// 8장 함수 손코딩 복습

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.141592

double cal_area(double radius);

int main()
{
	double radius;

	printf("원의 반지름을 입력하시오: ");
	scanf("%lf", &radius);

	printf("원의 면적은 %lf입니다.\n", cal_area(radius));

	return 0;
}

double cal_area(double radius)
{
	return (PI * (radius * radius));
}