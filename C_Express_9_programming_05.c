// C_Express_9_programming_05
// 1부터 n까지의 합 (1+2+3+...+n)을 계산하는 문제를 순환기법을 이용해 작성해보자

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int factorial(int n);

int main()
{
	int num;
	printf("정수를 입력하시오: ");
	scanf("%d", &num);

	printf("1부터 %d까지의 합=%d\n", num, factorial(num));

	return 0;
}

int factorial(int n)
{
	if (n != 0) // n>=1일 때, n! = n + (n-1)!
		return n + factorial(n - 1);
	else		// n=0일 때, n! = 1
		return n;
}