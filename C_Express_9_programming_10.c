// C_Express_9_programming_10
// 다음과 같은 수식의 값을 계산하는 순환적인 프로그램을 작성하라
// 1/1+1/2+1/3+1...+1/n

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double recursive(n);

int main()
{
	printf("%lf\n", recursive(10)); // 함수호출 시 숫자만 입력 가능

	return 0;
}

double recursive(n)
{
	if (n == 1) // n = 1일 때 1을 반환
		return 1;
	else
		return 1.0 / n + recursive(n - 1);
}