// 08_06

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int b_rand();

int main()
{
	srand(time(NULL));

	for (int i = 0; i < 5; i++) {
		printf("%d ", b_rand());
	}
	printf("\n");

	return 0;
}

int b_rand()
{
	return rand() % 2;
}