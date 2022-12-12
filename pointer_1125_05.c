// �迭 A[]�� B[]�� ���Ͽ� C[]�� �����ϴ� �Լ� �ۼ�

#include <stdio.h>
#define SIZE 10
void array_copy(int* A, int* B, int* C, int size);

int main()
{
	int i;
	int A[SIZE] = { 1,2,3,0 };
	int B[SIZE] = { 0 };
	int C[SIZE] = { 0 };

	printf("A[] = ");					// �迭 A[]�� �� ���
	for (i = 0; i < SIZE; i++) {
		printf("%d ", A[i]);
	}
	printf("\n");

	printf("B[] = ");
	for (i = 0; i < SIZE; i++) {
		printf("%d ", B[i]);
	}
	printf("\n");

	array_copy(A, B, C, SIZE);

	return 0;
}

void array_copy(int* A, int* B, int* C, int size)
{
	int i;

	printf("C[] = ");
	for (i = 0; i < size; i++) {
		C[i] = A[i] + B[i];
		printf("%d ", C[i]);
	}
	printf("\n");
}