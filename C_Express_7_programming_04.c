// 7장_반복문, 프로그래밍 문제_04
// 반복 루프를 사용하여 패턴의 별을 출력하는 프로그램 작성하기

#include <stdio.h>

int main()
{
	int i, j, k;

	for (i = 0; i < 5; i++) {
		for (j = 0; j < (4 - i); j++)
			printf(" ");
		for (k = 0; k < i; k++)
			printf("*");
		printf("\n");
	}

	return 0;
}