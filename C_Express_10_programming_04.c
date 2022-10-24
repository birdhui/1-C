// C_Express_10_programming_04
// 배열 a를 배열 b로 복사하는 함수 array_copy를 작성하고 테스트하라
// 이 함수의 반환값은 없다.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int array_copy(int a[], int b[], int size);

int main()
{
	int i;
	int a[10] = { 1, 2, 3, 0, 0, 0, 0, 0, 0, 0 };
	int b[10] = { 0 }; // 배열 초기화

	for (i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");

	array_copy(a, b, 10); // 함수 호출

	for (i = 0; i < 10; i++) {
		printf("%d ", b[i]); // 복사된 b[]배열 출력
	}
	printf("\n");

	return 0;
}

int array_copy(int a[], int b[], int size)
{
	int i;

	for (i = 0; i < size; i++) {
		if (a[i] != b[i]) // a배열과 b배열이 다르다면
			b[i] = a[i];  // b배열에 a배열 복사
	}
	return 0;
}