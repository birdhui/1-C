// C_Express_9_programming_05
// 1���� n������ �� (1+2+3+...+n)�� ����ϴ� ������ ��ȯ����� �̿��� �ۼ��غ���

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int factorial(int n);

int main()
{
	int num;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &num);

	printf("1���� %d������ ��=%d\n", num, factorial(num));

	return 0;
}

int factorial(int n)
{
	if (n != 0) // n>=1�� ��, n! = n + (n-1)!
		return n + factorial(n - 1);
	else		// n=0�� ��, n! = 1
		return n;
}