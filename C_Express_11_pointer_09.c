// �����ͷ� �ִ������� �ִ����� ���ϴ� ���α׷�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int get_gcd(int x, int y);
void get_lcm_gcd(int x, int y, int* p_lcm, int* p_gcd);

int main()
{
	int x, y, lcm, gcd;

	printf("�ΰ��� ������ �Է��Ͻÿ�: ");
	scanf("%d %d", &x, &y);

	get_lcm_gcd(x, y, &lcm, &gcd);
	printf("�ּҰ������ %d�Դϴ�.\n", lcm);
	printf("�ִ������� %d�Դϴ�.\n", gcd);
	return 0;
}
// �ִ����� ���ϴ� ����
int get_gcd(int x, int y)
{
	if (y == 0)
		return x;
	else
		return get_gcd(y, x % y);
}
// �ִ����� ���ϴ� ����
void get_lcm_gcd(int x, int y, int* p_lcm, int* p_gcd)
{
	*p_gcd = get_gcd(x, y);
	*p_lcm = (x * y) / *p_gcd;
	
}