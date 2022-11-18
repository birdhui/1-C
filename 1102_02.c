#define _CRT_SECURE_NO_WARNINIGS
#include <stdio.h>

int main()
{
	int i = 0;
	int* pi;

	pi = &i;
	// pi = &i i의 주소를 받음
	*pi = 300;
	// *pi = i 실제값 바꿈

	// 포인터에 i주소 대입, pi = i주소 출력
	printf("%u\n", pi);
	// *pi = i의 실제값 출력
	printf("%d\n", *pi);

	return 0;
}