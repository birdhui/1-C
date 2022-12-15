// 포인터 함수를 이용해 2개 이상의 값을 반환하는 프로그램
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void get_int(int* px, int* py);

int main()
{
	int x, y, sum = 0;

	printf("2개의 정수를 입력하시오(예: 10 20): ");
	get_int(&x, &y);
	/*
		*px, *py;
		px = &x (주소값)
		py = &y (주소값)
		
	*/

	sum = x + y;
	printf("정수의 합은 %d\n", sum);
	
	return 0;
}

void get_int(int* px, int* py)
{
	/*
		px = &x
		py = &y
		
		printf 출력이었으면 *을 붙여야 값이 나왔겠지만,
		scanf 니까 *을 붙이지 않아야 포인터 매개 변수에 값이 저장됨
	*/

	scanf("%d %d", px, py);
}