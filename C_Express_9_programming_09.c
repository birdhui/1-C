// C_Express_9_programming_09
// �ڸ����� �հ踦 ����ϴ� ���α׷�
// 123�� ��� 6�� ��µȴ�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_digit_sum(n);

int main()
{
	int n;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &n);

	printf("�ڸ����� ��: %d\n", get_digit_sum(n));

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