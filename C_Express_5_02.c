#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a = 0, b = 1, c = 0;
	double i, j;
	printf("�Ǽ��� �Է��ϼ���: ");
	scanf("%lf %lf", &i, &j);

	printf("%lf %lf %lf %lf\n", i + j, i - j, i * j, i / j);

	c = a ? a : b;
	printf("%d\n", c);
	// �����꿡�� ���� 0�̸� ����, 0�� �ƴϸ� ���̱� ������
	// ������� 0
	// a�� ���� 0�̹Ƿ� ������ -> ������ ��
	// b�� ���� 1�� c�� ���� �ȴ�.

	return 0;
}