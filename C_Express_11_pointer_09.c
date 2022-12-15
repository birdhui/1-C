// 포인터로 최대공약수와 최대공배수 구하는 프로그램
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int get_gcd(int x, int y);
void get_lcm_gcd(int x, int y, int* p_lcm, int* p_gcd);

int main()
{
	int x, y, lcm, gcd;

	printf("두개의 정수를 입력하시오: ");
	scanf("%d %d", &x, &y);

	get_lcm_gcd(x, y, &lcm, &gcd);
	printf("최소공배수는 %d입니다.\n", lcm);
	printf("최대공약수는 %d입니다.\n", gcd);
	return 0;
}
// 최대공약수 구하는 공식
int get_gcd(int x, int y)
{
	if (y == 0)
		return x;
	else
		return get_gcd(y, x % y);
}
// 최대공배수 구하는 공식
void get_lcm_gcd(int x, int y, int* p_lcm, int* p_gcd)
{
	*p_gcd = get_gcd(x, y);
	*p_lcm = (x * y) / *p_gcd;
	
}