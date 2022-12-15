// 배열 A와 B를 더한 값을 배열 C에 저장하는 프로그램
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void array_add(int* A, int* B, int* C, int size);

int main()
{
	int A[10] = { 1,2,3,0 };
	int B[10] = { 2,3,4,0 };
	int C[10] = { 0 };

	array_add(A, B, C, 10);
	return 0;
}

void array_add(int* A, int* B, int* C, int size)
{
	int i;

	printf("A[] = ");
	for (i = 0; i < size; i++) {
		printf("%d ", A[i]);
	}
	printf("\n");

	printf("B[] = ");
	for (i = 0; i < size; i++) {
		printf("%d ", B[i]);
	}
	printf("\n");
	
	printf("C[] = ");
	for (i = 0; i < size; i++) {
		C[i] = A[i] + B[i];
		printf("%d ", C[i]);
	}
	printf("\n");
}