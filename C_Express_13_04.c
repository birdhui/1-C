// 구조체를 이용하여 복소수를 다음과 같이 정의하고 복소수의 덧셈을 수행하는 함수
// ㅠㅠㅠㅠ 너무 어려워ㅓㅓㅓㅓㅓ
#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>

typedef struct complex {
	double real;
	double imag;
}complex;

struct complex complex_add(struct complex c1, struct complex c2)
{
	complex c3;
	c3.real = c1.real + c2.real;
	c3.imag = c1.imag + c2.imag;
}

int main()
{
	complex c1, c2, c3;
	
	c1.real = 1;
	c1.imag = 2;

	c2.real = 2;
	c2.imag = 3;

	c3 = complex_add(c1, c2);
	printf("%lf+%lfi\n", c1.real, c1.imag);
	printf("%lf+%lfi\n", c2.real, c2.imag);
	printf("%lf+%lfi\n", c3.real, c3.imag);

	return 0;
}