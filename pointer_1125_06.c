// 월급이 배열 A[]에 저장되어 있음, 회사에서 지급할 월급의 총액을 계산하라
// 정수형 배열 요소들의 합을 구해 반환하는 함수 작성

#include <stdio.h>
#define SIZE 10
int array_sum(int* A, int size);

int main()
{
	int A[SIZE] = { 1,2,3,0 };

	printf("월급의 합=%d\n", array_sum(A, SIZE));

	return 0;
}

int array_sum(int* A, int size)		// int *A = 포인터 매개 변수
{
	int i;
	int* p;
	int sum = 0;

	// 포인터 p는 배열 A[]의 값을 가진다.
	p = A;

	for (i = 0; i < size; i++) {
		sum += *p++;	// *p++ : *p가 가리키는 주소의 값을 증가시킨다.
	}

	return sum;			// sum 값을 반환
						// 값을 반환해야 하기 때문에 int형 함수를 사용해야 함
}