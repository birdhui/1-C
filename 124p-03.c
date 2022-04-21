#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int base, height, area;

	printf("삼각형의 밑변: ");
	scanf("%d", &base);

	printf("삼각형의 높이: ");
	scanf("%d", height);

	area = 0.5 * base * height;

	/* 삼각형 넓이 공식
	   = 1/2(=0.5)*밑변*높이 */

	printf("삼각형의 높이: %lf", area);

	return 0;
}