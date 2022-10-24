// C_Express_9_programming_09
// 자리수의 합계를 계산하는 프로그램
// 123의 경우 6이 출력된다

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_digit_sum(n);

int main()
{
	int n;

	printf("정수를 입력하시오: ");
	scanf("%d", &n);

	printf("자리수의 합: %d\n", get_digit_sum(n));

	return 0;
}

int get_digit_sum(n)
{
	if (n == 0) {
		return 0;
	}
	else
		return (n % 10) + get_digit_sum(n / 10);

	return 0;
}