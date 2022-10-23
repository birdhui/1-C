// C_Express_8_programming_14
// 둘 점 사이의 거리를 계산하는 함수를 작성해보자
// 2차원 공간에서 두 점과 사이의 거리를 계산하는 Get_distance(double x1, double y1, double x2, double y2)를 작성
// 다음과 같은 두 점 사이의 계산하는 공식을 사용하라
// 제곱근은 sqrt() 라이브러리 함수를 사용해라

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double get_distance(double x1, double y1, double x2, double y2);

int main()
{
	double x1 = 0, x2 = 0, y1 = 0, y2 = 0;

	printf("첫번째 점의 좌표를 입력하시오:(x, y): ");
	scanf("%lf %lf", &x1, &y1);
	printf("두번째 점의 좌표를 입력하시오:(x, y): ");
	scanf("%lf %lf", &x2, &y2);

	printf("두 점 사이의 거리는 %lf입니다.\n", get_distance(x1, y1, x2, y2));

	return 0;
}

double get_distance(double x1, double y1, double x2, double y2)
{
	return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}