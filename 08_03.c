// 08_03
// 8�� �Լ� ���ڵ� ����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.141592

double cal_area(double radius);

int main()
{
	double radius;

	printf("���� �������� �Է��Ͻÿ�: ");
	scanf("%lf", &radius);

	printf("���� ������ %lf�Դϴ�.\n", cal_area(radius));

	return 0;
}

double cal_area(double radius)
{
	return (PI * (radius * radius));
}