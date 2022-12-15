// 정수 배열을 받아서 요소들을 난수로 채우는 함수를 작성하고 테스트
// 난수는 rand()함수 활용
// 포인터 매개 변수 활용
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void array_fill(int* A, int size);

int main()
{
	int B[10] = { 0 };
	srand(time(NULL));

	printf("함수 호출 전 인덱스\n");
	for (int i = 0; i < 10; i++) {
		printf("%d ", B[i]);
	}
	printf("\n");

	array_fill(B, 10);
	printf("함수 호출 후 인덱스\n");
	for (int i=0; i < 10; i++) {
		printf("%d ", B[i]);
	}

	return 0;
}

// *A[] = &B[]
// A = B
void array_fill(int* A, int size)
{
	int i;
	for (i = 0; i < size; i++) {
		// 배열은 포인터 자체니까 *을 붙이지 않아도 됨?
		A[i] = rand();
	}
}