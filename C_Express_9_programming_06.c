// C_Express_9_programming_06
// ��ȯ����� �̿��� �������� ����ϴ� �Լ� power(int base, int power_raised)�� �ۼ��ϰ� �׽�Ʈ�غ���
// power(2, 3)�� ȣ��Ǹ� 2^3�� ����� ��ȯ�Ѵ�.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int power(int base, int power_raised);

int main()
{
	int b, p;
	printf("�ؼ�: ");
	scanf("%d", &b);
	printf("����: ");
	scanf("%d", &p);

	printf("%d^%d = %d\n", b, p, power(b,p));

	return 0;
}

int power(int base, int power_raised)
{
	if (power_raised != 1) {
		return base * power(base, power_raised - 1);
	}
	else
		return base;
}