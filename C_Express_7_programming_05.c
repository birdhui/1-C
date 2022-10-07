// 7장_반복문, 프로그래밍 문제_05
// 중첩 반복문을 사용, 정수값을 입력받아 다음과 같이 출력하는 프로그램 작성하기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;

	printf("출력하고자 하는 정수값을 입력하시오 : ");
	scanf("%d", &num);

	for (int i = 1; i <= num; i++) {
		for (int j = 1; j <= i + 1; j++) {
			printf("%d ", j);
		}
		printf("\n");
	}

	return 0;
}