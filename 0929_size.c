// 배열 선언
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 5
// 배열의 크기가 변경되면 SIZE 정의만 변경

int main()
{
	int i, scores[SIZE];
	srand(time(NULL));
	// #include <time.h>, srand(time(NULL));
	// 0부터 99까지 난수 발생 함수 사용
	// srand 함수로 실행할 때마다 다른 값 받기

	for (i = 0; i < SIZE; i++)
		scores[i] = rand() % 100;

	for (i = 0; i < SIZE; i++)
		printf("scores[%d]=%d\n", i, scores[i]);

	return 0;
}