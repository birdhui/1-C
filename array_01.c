#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 배열 배개 변수인 경우4/
// 교수님이 인덱스 사용하지 말고 포인터 사용하라고 했음
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
	*b = 4;			// a[0]
	*(b + 1) = 5;	// a[1]
	*(b + 2) = 6;	// a[2]
}