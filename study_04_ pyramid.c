#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N 5

int main()
{
	int i, j;

	for (i = 0; i < N; i++) { // 5행 출력을 돕는 반복문

		for (j = 0; j < N - i - 1; j++) { // j=0 일 때, j < 5-i-1 => j < 4 => 공백 4개 출력
			printf(" ");				  // j=1 일 때, j < 3 => 공백 3개 출력
		}

		for (j = 0; j < 2 * i + 1; j++) { // j=0 일 때, j < 1 => 별 1개 출력
			printf("*");				  // j=1 일 때, j < 3 => 별 3개 출력
		}								  // j=2 일 때, j < 5 => 별 5개 출력

		printf("\n");
	}

	return 0;
}

/*
int main()
{
	int i, j;

	for (i = 0; i < N; i++) { // i가 0 ~ 9일 때까지 반복

		for (j = N - i - 1; j > 0; j--) { // j = 19부터 0이 될 때까지 공백을 출력하면서 증감
			printf("   ");
		}

		for (j = 0; j < i; j++) { // i가 0일 때는 찍지 않고 넘어가기 때문에 첫 줄은 공백만 찍힘
			printf("★ ");		  // i가 1일 때 i보다 작으니까 별 찍음
		}						  // i가 2일 때 j=1

		for (j = 0; j < i - 1; j++) { // i가 1일 때 위에서 별 하나 찍으면 이 반복문은 아무것도 출력 못함 ( i - 1 = 0 )
			printf("★ ");			  // i가 2일 때
		}

		printf("\n");
	}
	return 0;
}
*/