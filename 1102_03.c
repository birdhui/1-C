#define _CRT_SECURE_NO_WARNINIGS
#include <stdio.h>
// �Լ��� ������ ���� ���� ȣ�� �������� �ѱ�� main���� �ش� ������ ����غ���
// �Լ��� �Ű������� �ּҿ� ���� ȣ�� �������� �ѱ�� main���� �ش� ������ ����غ���
// �ݹ��� value?

void mento(int num);

int main()
{
	int an = 12;
	mento(an); // 7

	printf("%d", an);

	return 0;
}

void mento(int num)
{
	num = 7;
}
// int num �����ϸ�
// num�� 12�� �����ϰ� �Ǽ� �Լ� num = 12
// �׷��� num�� 12�� ���