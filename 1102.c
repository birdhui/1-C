#define _CRT_SECURE_NO_WARNINIGS
#include <stdio.h>

int main()
{
	int i = 30;
	int* pi;

	pi = &i; // �ּҰ� �θ�
	*pi = 20; // i�� ������

	printf("%u\n", &i);
	printf("%u\n", pi);

	return 0;
}

//
// ������ �����Ͱ� ������ �ּ�
// ������ ������ ���� 300