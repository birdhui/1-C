// C_Express_8_programming_13
// 두 개의 정수 n, m을 입력받아서 n이 m의 배수이면 1을 반환하고
// 그렇지 않으면 0을 반환하는 함수
// Is_multiple(int n, int m)을 작성하고 테스트해보자

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

Is_multiple(int n, int m);

int main()
{
	int num1 = 0, num2 = 0;
	printf("첫번째 정수를 입력하시오: ");
	scanf("%d", &num1);
	printf("두번째 정수를 입력하시오: ");
	scanf("%d", &num2);

	if (Is_multiple(num1, num2) == 1) {
		printf("%d는 %d의 배수입니다.\n", num1, num2);
	}
	else if (Is_multiple(num1, num2) == 0)
		printf("%d는 %d의 배수가 아닙니다.\n", num1, num2);

	return 0;
}

Is_multiple(int n, int m)
{
	if (n % m == 0) { // n이 m의 배수일 때
		return 1;
	}
	else			  // n이 m의 배수가 아닐 때
		return 0;
}