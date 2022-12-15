// 여러 배열의 인덱스를 합쳐 하나의 정렬된 새로운 배열에 대입하는 프로그램
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void merge(int* A, int* B, int* C, int size);

int main()
{
	int A[4] = { 2,5,7,8 };
	int B[4] = { 1,3,4,6 };
	int C[8] = { 0 };

	merge(A, B, C, 8);

	return 0;
}

void merge(int* A, int* B, int* C, int size)
{
	int i, j = 0, k = 0;

	printf("A[] = ");
	for (i = 0; i < 4; i++) {
		printf("%d ", A[i]);
	}
	printf("\n");

	printf("B[] = ");
	for (i = 0; i < 4; i++) {
		printf("%d ", B[i]);
	}
	printf("\n");

	while ((i < size) && (j < size)) {
		if (A[i] <= B[j]) {
			C[k++] = A[i++];
		}
		else {
			C[k++] = B[j++];
		}
		while (i < size) {
			C[k++] = A[i++];
		}
		while (j < size) {
			C[k++] = B[j++];
		}
	}

	printf("C[] = ");
	for (k = 0; k < size; k++) {
		printf("%d ", *(C + i));
	}
	printf("\n");
}