// 정수 배열 A[]를 다른 정수 배열 B[]에 복사하는 함수를 작성하고 테스트

#include <stdio.h>
#define SIZE 10
void array_copy(int* A, int* B, int size);

int main()
{
	int A[SIZE] = { 1,2,3,0 };
	int B[SIZE] = { 0 };				// 배열 B[] 초기화

	printf("A[] = ");
	for (int i = 0; i < SIZE; i++) {	// 배열 A[] 값들 출력
		printf("%d ", A[i]);
	}
	printf("\n");

	printf("B[] = ");
	for (int i = 0; i < SIZE; i++) {
		printf("%d ", B[i]);
	}
	printf(" (복사전)\n");				// 함수 호출 전 배열 B[]의 값

	array_copy(A, B, SIZE);				// 함수 호출 후 배열 B[]의 값
										// 함수를 통해 배열 A[]의 값이 배열 B[]에 복사가 됨
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