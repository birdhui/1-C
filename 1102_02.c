#define _CRT_SECURE_NO_WARNINIGS
#include <stdio.h>

int main()
{
	int i = 0;
	int* pi;

	pi = &i;
	// pi = &i i�� �ּҸ� ����
	*pi = 300;
	// *pi = i ������ �ٲ�

	// �����Ϳ� i�ּ� ����, pi = i�ּ� ���
	printf("%u\n", pi);
	// *pi = i�� ������ ���
	printf("%d\n", *pi);

	return 0;
}