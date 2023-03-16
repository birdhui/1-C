#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, j;
	printf("2개의 정수를 입력하시오: ");
	scanf("%d %d", &i, &j);

	printf("몫: %d 나머지: %d\n", i / j, i % j);

	return 0;
}