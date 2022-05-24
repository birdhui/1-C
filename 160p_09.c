#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double x, num1, num2;

	printf("x의 값을 입력하시오: ");
	scanf("%lf", &x);

	num1 = (x * x) - (9 * x) + 2;
	num2 = (7 * x) + 2;

	if (x <= 0)
		printf("f(x)의 값은 %lf\n", num1);
	else if (x > 0)
		printf("f(x)의 값은 %lf\n", num2);

	return 0;
}

// 사용자로부터 x값을 입력받아 함수값을 계산하여
// 화면에 출력한다. x는 실수다.