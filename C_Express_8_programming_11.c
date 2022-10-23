// C_Express_8_programming_11
// 0.0부터 1.0까지의 난수를 반환하는 함수 f_rand()를 작성하고 5번 호출하여 본다.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double f_rand();

int main()
{
	double num = 0;

	srand(time(NULL));

	for (num = 0; num < 5; num++) {
		printf("%lf ", f_rand(num));
	}
	printf("\n");

	return 0;
}

double f_rand()
{
	return rand() / (double)RAND_MAX;
}