// C_Express_9_programming_12
// 순환 호출을 이용해 피보나치 수열을 계산해보자
// 일반적인 경우, 앞의 두 개의 숫자를 더해서 뒤의 숫자를 만들면 된다.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fib(int n);

int main()
{
	int n;

	for (n = 0; n < 10; n++) { // n이 0부터 9가 될 때까지 반복
		printf("fib(%d) = %d", n, fib(n)); // fib 함수 호출
		printf("\n");
	}

	return 0;
}

int fib(int n)
{
	if (n == 0)
		return 0;

	else if (n == 1)
		return 1;

	else 
		return fib(n - 2) + fib(n - 1);
}