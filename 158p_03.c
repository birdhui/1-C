#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num1, num2, num3, min;

	printf("3개의 정수를 입력하시오: ");
	scanf("%d %d %d", &num1, &num2, &num3);

	if (num1 < num2)
		if (num1 < num3)
			min = num1;
		else
			min = num3;
	else if (num2 < num3)
		min = num2;
	else
		min = num3;

	printf("제일 작은 수는 %d입니다.\n", min);
	return 0;
}