// C_Express_9_programming_12
// ��ȯ ȣ���� �̿��� �Ǻ���ġ ������ ����غ���
// �Ϲ����� ���, ���� �� ���� ���ڸ� ���ؼ� ���� ���ڸ� ����� �ȴ�.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fib(int n);

int main()
{
	int n;

	for (n = 0; n < 10; n++) { // n�� 0���� 9�� �� ������ �ݺ�
		printf("fib(%d) = %d", n, fib(n)); // fib �Լ� ȣ��
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