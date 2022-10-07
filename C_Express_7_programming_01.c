// 7장_반복문, 프로그래밍 문제_01
// 카운터의 초기값 입력받아 변수의 값을 1씩 감소시키면서 0이 될 때까지 반복하기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, num;
	
	printf("카운터의 초기값을 입력하시오 : ");
	scanf("%d", &num);

	for (i = num; i >= 0; i--) {
		printf("%d ", i);
	}
	printf("\n");

	return 0;
}