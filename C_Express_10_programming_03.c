// C_Express_10_programming_03
// 2개의 배열 a,b를 받아 대응되는 배열 요소가 같은지는 검사하는 함수 array_equal(int a[], int b[], int size)를 작성하고 테스트하,
// a[0]과 b[0], a[1], b[1],...,a[size-1]과 b[size-1]가 같은지 검사
// 전체 요소가 같다면 1반환 그렇지 않으면 0반환
// 반복 루프를 이용해 배열의 각 요소가 같은지를 검사, 만약 하나라도 다르면 0을 반환

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int array_equal(int a[], int b[], int size);

int main()
{
	int i;
	int a[10] = { 0,0,0,0,0,0,0,0,0 }; // 0부터 9까지 : 10개니까 a[10]
	int b[10] = { 0,0,0,0,0,0,0,0,0 };

	for (i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");

	for (i = 0; i < 10; i++) {
		printf("%d ", b[i]);
	}
	printf("\n");

	if (array_equal(a, b, 10) == 0)
		printf("2개의 배열은 다름\n");
	else if (array_equal(a, b, 10) == 1)
		printf("2개의 배열은 같음\n");

	return 0;
}

int array_equal(int a[], int b[], int size)
{
	int i;
	for (i = 0; i < size; i++) {
		if (a[i] != b[i]) // a배열과 b배열이 다르다면 0을 반환
			return 0;
	}
	return 1; // a배열과 b배열이 같으면 1을 반환
}