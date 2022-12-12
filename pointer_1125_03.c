// 정수 배열의 요소들을 화면에 출력하는 함수를 작성하고 테스트

#include <stdio.h>
#define SIZE 10
void array_print(int* A, int size);

int main()
{
	int a[SIZE] = { 1,2,3,4,0 };

	array_print(a, SIZE);

	return 0;
}

void array_print(int* A, int size)
{
	int i;
	printf("A[] = { ");

	for (i = 0; i < size; i++) {
		printf("%d ", A[i]);
	}

	printf(" }\n");
}