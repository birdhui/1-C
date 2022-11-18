#define _CRT_SECURE_NO_WARNINIGS
#include <stdio.h>

int main()
{
	int i = 30;
	int* pi;

	pi = &i; // 주소값 부름
	*pi = 20; // i의 실제값

	printf("%u\n", &i);
	printf("%u\n", pi);

	return 0;
}

//
// 정수형 포인터가 정수형 주소
// 정수형 포인터 값을 300