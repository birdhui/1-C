// C_Express_8_programming_05
// �Ǽ��� ������ ��ȯ�ϸ� �Ҽ��� ���ϴ� �߷��� ��������.
// ���� ���, 6.999�� ������ ��ȯ�ϸ� 6�� �ȴ�.
// �Ǽ��� 0.5�� ���Ͽ� �Ҽ��� ���ϸ� ������ �ݿø� ������ �����ϴ� �Լ� round(double f)�� �ۼ��ϰ� �׽�Ʈ�϶�
// ��, f�� ������ �����϶�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int round(double f);

int main()
{
	double num;

	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf("%lf", &num);

	printf("�ݿø��� ���� %d�Դϴ�.\n", round(num));

	return 0;
}

int round(double f)
{
	return f + 0.5;
}

// �� �ȵǴ��� Ȯ���غ��� �ڵ� �����غ���
// �Լ��� ���۵��ȴ�. �� �ȵ���?