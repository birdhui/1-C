// �迭 �ε��� ���ϱ� ���α׷�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int array_sum(int* A, int size);

int main()
{
	int A[10] = { 1,2,4,0 };

	array_sum(A, 10);

	return 0;
}

int array_sum(int* A, int size)
{
	int i, sum = 0;

	printf("A[] = ");
	for (i = 0; i < size; i++) {
		printf("%d ", A[i]);
	}
	printf("\n");

	for (i = 0; i < size; i++) {
		sum += A[i];
	}
	printf("������ ��=%d", sum);
	return sum;
}