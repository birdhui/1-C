#define _CRT_SECURE_NO_WARNINIGS
#include <stdio.h>
// �Լ��� �Ű������� �ּҿ� ���� ȣ�� �������� �ѱ�� main���� �ش� ������ ����غ���
// ���� ���� ȣ�� / �ּҿ� ���� ȣ���� ����
// �ݹ��� value?

void mento(int* num);

int main()
{
	int num = 10;
	mento(&num);
	// num�� �ּ�

	printf("%d\n", num);

	return 0;
}

void mento(int* num)
{
	int* pnum;
	pnum = &num;
	*pnum = 20;
}