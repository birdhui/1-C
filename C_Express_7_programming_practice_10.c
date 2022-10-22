// 7장_반복문, 프로그래밍 문제_10
// 실수의 거듭 제곱 값을 계산하는 프로그램 작성
// 사용자로부터 하나의 실수 r과 거듭 제곱 횟수를 나타내는 정수 n을 입력받아 r^n을 구하기

#include <stdio.h>

int main()
{
	int n, result = 0;
	double r;

	printf("하나의 실수와 거듭 제곱 횟수를 입력하시오 : ");
	scanf("%lf %d", &r, &n);

	for (int i = 0; i <= n; i++) {
		result += i * i;
	}
	printf("거듭 제곱 값은 %d입니다.\n", result);

	return 0;
}