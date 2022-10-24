// C_Express_9_programming_06
// 순환기법을 이용해 지수값을 계산하는 함수 power(int base, int power_raised)를 작성하고 테스트해보자
// power(2, 3)가 호출되면 2^3을 계산해 반환한다.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int power(int base, int power_raised);

int main()
{
	int b, p;
	printf("밑수: ");
	scanf("%d", &b);
	printf("지수: ");
	scanf("%d", &p);

	printf("%d^%d = %d\n", b, p, power(b,p));

	return 0;
}

int power(int base, int power_raised)
{
	if (power_raised != 1) {
		return base * power(base, power_raised - 1);
	}
	else
		return base;
}