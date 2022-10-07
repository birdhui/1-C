// 7장_반복문, 프로그래밍 문제_03
// 사용자가 입력한 정수의 모든 약수를 출력하는 프로그램 작성하기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, num;

	printf("약수를 고하고자 하는 정수의 값을 입력하시오 : ");
	scanf("%d", &num);

	for (i = 1; i <= num; i++) {
		if (num % i == 0)
			printf("%d ", i);
	}
	printf("\n");

	return 0;
}