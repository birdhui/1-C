#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, j;
	printf("2���� ������ �Է��Ͻÿ�: ");
	scanf("%d %d", &i, &j);

	printf("��: %d ������: %d\n", i / j, i % j);

	return 0;
}