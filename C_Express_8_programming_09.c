// C_Express_8_programming_09
// Rand()가 한번 호출될 때마다 0에서 32767까지의 정수를 같은 확률로 선택하여 반환한다.
// Rand()함수를 이용하여 0 또는 1 값을 무작위로 반환하는 함수 b_rand()를 작성하고 5번 호출하여 보자.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int b_rand();

int main()
{
	int i;
	srand(time(NULL));

	for (i = 0; i < 5; i++) {
		printf("%d", b_rand());
	}
	printf("\n");

	return 0;
}

int b_rand()
{
	return rand() % 2;
}