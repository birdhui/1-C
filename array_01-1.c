#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 배열 배개 변수인 경우
void sub(int b[], int size);

int main()
{
	int a[3] = { 1, 2, 3 };

	printf("a[0] = %d a[1] = %d a[2] = %d\n", a[0], a[1], a[2]);
	sub(a, 3);
	printf("a[0] = %d a[1] = %d a[2] = %d", a[0], a[1], a[2]);

	return 0;
}
void sub(int b[], int size)
{
	b[0] = 2;	// a[0]
	b[1] = 3;	// a[1]
	b[2] = 4;	// a[2]
}