// �� ������ ���� ��ȯ�ϱ�

#include <stdio.h>

void swap(int *x, int *y);

int main()
{
	int x = 1;
	int y = 2;

	swap(&x, &y);
	printf("x = %d\ny = %d\n", x, y);

	return 0;
}

void swap(int* x, int* y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}