#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1, num2, sum;

	printf("첫번째 숫자를 입력하시오: ");
	scanf("%d", &num1);

	printf("두번째 숫자를 입력하시오: ");
	scanf("%d", &num2);

	sum = num1 + num2;

	printf("두수의 합: %d", sum);

	return 0;
}