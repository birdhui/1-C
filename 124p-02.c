#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double mile, meter;

	printf("마일을 입력하시오: ");
	scanf("%lf", &mile);

	meter = 1609.0 * mile;

	/* 1,609를 곱하여 미터로 변환한다.
	   실수형으로 나타내야하기 때문에
	   1609.0으로 표기한다. */

	printf("%.1lf마일은 %lf미터입니다.", mile, meter);

	return 0;
}