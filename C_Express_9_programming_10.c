// C_Express_9_programming_10
// ������ ���� ������ ���� ����ϴ� ��ȯ���� ���α׷��� �ۼ��϶�
// 1/1+1/2+1/3+1...+1/n

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double recursive(n);

int main()
{
	printf("%lf\n", recursive(10)); // �Լ�ȣ�� �� ���ڸ� �Է� ����

	return 0;
}

double recursive(n)
{
	if (n == 1) // n = 1�� �� 1�� ��ȯ
		return 1;
	else
		return 1.0 / n + recursive(n - 1);
}