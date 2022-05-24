#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num1, num2;

	printf("정수를 입력하시오: ");
	scanf("%d", &num1);
	printf("정수를 입력하시오: ");
	scanf("%d", &num2);

	if (num1 % num2 == 0) {
		printf("약수입니다.\n");
	}
	else {
		printf("약수가 아닙니다.\n");
	}

	return 0;
}