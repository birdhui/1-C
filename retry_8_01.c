// �־��� �Ǽ��� �����Ͽ� ��ȯ�ϴ� �Լ� double square(double)�� �ۼ��Ѵ�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double square(double x, double y);

int main()
{
	int num1, num2 = 0;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &num1);

	square(num1, num2);

	return 0;
}

double square(double x, double y)
{
	y = x * x;

	printf("�־��� ���� %lf�� ������ %lf�Դϴ�.\n", x, y);

	return 0;
}