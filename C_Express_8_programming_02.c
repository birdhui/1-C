// C_Express_8_programming_02
// ���� ������ ���ϴ� ������ �Լ��� �ۼ��ϱ�
// ���� ������ ���ϴ� �Լ� Cal_area(double radius)�� �ۼ��ϰ� �Լ��� ȣ���� ���� ������ ����ϴ� ���α׷� �ϼ���Ű��

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.141592

double Cal_area(double radius);

int main()
{
	double area, radius; // r = ������
	printf("���� �������� �Է��Ͻÿ�: ");
	scanf("%lf", &radius);

	area = Cal_area(radius);
	printf("���� ������ %lf�Դϴ�.\n", area);

	return 0;
}

double Cal_area(double radius)
{
	return PI * radius * radius;
}