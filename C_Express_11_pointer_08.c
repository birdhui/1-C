// 주어진 값을 배열에서 탐색하여 인덱스를 반환하는 함수 작성하기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int search(int* A, int size, int search_value);

int main()
{
	int A[10] = { 100,200,50,0 };

	printf("월급이 200만원인 사람의 인덱스: A[%d]", search(A, 10, 200));

	return 0;
}

int search(int* A, int size, int search_value)
{
	int i;
	for (i = 0; i < size; i++) {
		if (A[i] == search_value)
			return i;
	}
}