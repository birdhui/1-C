#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 사각형 만들기

int main()
{
	int i, j;

	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			printf("★ ");
		}
		printf("\n");
	}
	/*
		i = 0 ~ 9 일 때 참이고 줄바꿈을 한다.
		j = 0 ~ 9 일 때 참이고 별을 10번 찍는다.

		즉, i = 0 일 때 참 => j가 10개의 별을 찍고 줄바꿈
		    i = 1 일 때 참 => j가 10개의 별을 찍고 줄바꿈

			=> 10개 찍고 줄바꿈을 10번 반복
	*/

	return 0;
}