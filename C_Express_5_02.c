#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a = 0, b = 1, c = 0;
	double i, j;
	printf("실수를 입력하세요: ");
	scanf("%lf %lf", &i, &j);

	printf("%lf %lf %lf %lf\n", i + j, i - j, i * j, i / j);

	c = a ? a : b;
	printf("%d\n", c);
	// 논리연산에서 값이 0이면 거짓, 0이 아니면 참이기 때문에
	// 결과값은 0
	// a의 값은 0이므로 조건이 -> 거짓이 됨
	// b의 값인 1이 c의 값이 된다.

	return 0;
}