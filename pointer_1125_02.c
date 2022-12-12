// 정수 배열을 받아서 요소들을 난수로 채우는 함수를 작성하고 테스트

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

void array_fill(int* A, int size);

int main()
{
	int a[SIZE] = { 0 };
	srand(time(NULL));		// srand함수로 배열 초기화

	array_fill(a, SIZE);	// a 배열 = 주소를 뜻하기 때문에 & 생략 가능

	return 0;
}

void array_fill(int* A, int size)
{
	int i;
	
	for (i = 0; i < size; i++) {
		A[i] = rand() % 100000;			// 10,000의 자리까지 난수 저장
		printf("%d ", A[i]);
	}
}