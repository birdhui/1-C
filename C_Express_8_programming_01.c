// C_Express_8_programming_01
// �־��� �Ǽ��� �����Ͽ� ��ȯ�� �Լ� double square(double)�� �ۼ��Ѵ�.
// square() �Լ��� �׽�Ʈ�ϴ� ���α׷� �ۼ�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
double square(double num); // �Լ� ����

int main()
{
	double i;

	// ������ �Ǽ� �Է�
	printf("������ �Է��Ͻÿ�: ");
	scanf("%lf", &i);

	// ������ �Ǽ� �� ���
	printf("���� %lf�� ������ %lf�Դϴ�.\n", i, square(i)); // square(i) = i * i
															// �Լ��� i���� ���ԵǾ� ���ȴ�.
	
	return 0;
}

double square(double num)
{
	return num * num;
}