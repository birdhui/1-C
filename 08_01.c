// 08_01
// 8�� �Լ� ���ڵ� ����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double square(double num);

int main()
{
	double num;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%lf", &num);

	printf("�־��� ���� %lf�� ������ %lf�Դϴ�.\n", num, square(num));

	return 0;
}

double square(double num)
{
	return num * num;
}