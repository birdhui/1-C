// ���� �����ϱ�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	if (remove("sample.txt") == -1)
		printf("sample.txt�� ������ �� �����ϴ�.\n");
		// ������ .c ���� ��ġ�� �ִٸ� ������
	else
		printf("sample.txt�� �����߽��ϴ�.\n");

	return 0;
}