// C_Express_8_programming_02
// 원의 면적을 구하는 문제를 함수로 작성하기
// 원의 면적을 구하는 함수 Cal_area(double radius)를 작성하고 함수를 호출해 원의 면적을 출력하는 프로그램 완성시키기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.141592

double Cal_area(double radius);

int main()
{
	double area, radius; // r = 반지름
	printf("원의 반지름을 입력하시오: ");
	scanf("%lf", &radius);

	area = Cal_area(radius);
	printf("원의 면적은 %lf입니다.\n", area);

	return 0;
}

double Cal_area(double radius)
{
	return PI * radius * radius;
}