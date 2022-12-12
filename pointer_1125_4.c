// ���� �迭 A[]�� �ٸ� ���� �迭 B[]�� �����ϴ� �Լ��� �ۼ��ϰ� �׽�Ʈ

#include <stdio.h>
#define SIZE 10
void array_copy(int* A, int* B, int size);

int main()
{
	int A[SIZE] = { 1,2,3,0 };
	int B[SIZE] = { 0 };				// �迭 B[] �ʱ�ȭ

	printf("A[] = ");
	for (int i = 0; i < SIZE; i++) {	// �迭 A[] ���� ���
		printf("%d ", A[i]);
	}
	printf("\n");

	printf("B[] = ");
	for (int i = 0; i < SIZE; i++) {
		printf("%d ", B[i]);
	}
	printf(" (������)\n");				// �Լ� ȣ�� �� �迭 B[]�� ��

	array_copy(A, B, SIZE);				// �Լ� ȣ�� �� �迭 B[]�� ��
										// �Լ��� ���� �迭 A[]�� ���� �迭 B[]�� ���簡 ��
	return 0;
}

void array_copy(int* A, int* B, int size)
{
	int i;

	printf("B[] = ");
	for (i = 0; i < size; i++) {
		B[i] = A[i];
		printf("%d ", B[i]);
	}
	printf("\n");
}