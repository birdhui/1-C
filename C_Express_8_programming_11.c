// C_Express_8_programming_11
// 0.0���� 1.0������ ������ ��ȯ�ϴ� �Լ� f_rand()�� �ۼ��ϰ� 5�� ȣ���Ͽ� ����.

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