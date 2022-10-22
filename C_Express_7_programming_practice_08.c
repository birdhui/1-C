// 7장_반복문, 프로그래밍 문제_08
// 사용자로부터 1부터 50까지의 숫자를 입력 받아 그 값만큼 별을 출력하는 프로그램 작성하기
// 막대는 가로로 그려지게 된다.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num = 0;

	printf("1부터 50까지의 정수를 입력하시오 : ");
	scanf("%d", &num);

	for (int i = 1; i <= num; i++) {
		printf("*");
	}
	if (num == -1) {
		printf("프로그램을 종료합니다.");
	}
	printf("\n");

	return 0;
}