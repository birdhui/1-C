// 배열 A를 B에 복사하기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void array_copy(int* A, int* B, int size);

int main()
{
	int A[10] = { 1,2,3,0 };
	int B[10] = { 0 };

	array_copy(A, B, 10);
	return 0;
}

void array_copy(int* A, int* B, int size)
{
	int i;

	printf("A[] = { ");
	for (i = 0; i < size; i++) {
		printf("%d ", A[i]);
	}
	printf("}\n");

	printf("B[] = { ");
	for (i = 0; i < size; i++) {
		B[i] = A[i];
		printf("%d ", B[i]);
	}
	printf("}\n");
}