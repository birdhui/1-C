// C_Express_8_programming_14
// �� �� ������ �Ÿ��� ����ϴ� �Լ��� �ۼ��غ���
// 2���� �������� �� ���� ������ �Ÿ��� ����ϴ� Get_distance(double x1, double y1, double x2, double y2)�� �ۼ�
// ������ ���� �� �� ������ ����ϴ� ������ ����϶�
// �������� sqrt() ���̺귯�� �Լ��� ����ض�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double get_distance(double x1, double y1, double x2, double y2);

int main()
{
	double x1 = 0, x2 = 0, y1 = 0, y2 = 0;

	printf("ù��° ���� ��ǥ�� �Է��Ͻÿ�:(x, y): ");
	scanf("%lf %lf", &x1, &y1);
	printf("�ι�° ���� ��ǥ�� �Է��Ͻÿ�:(x, y): ");
	scanf("%lf %lf", &x2, &y2);

	printf("�� �� ������ �Ÿ��� %lf�Դϴ�.\n", get_distance(x1, y1, x2, y2));

	return 0;
}

double get_distance(double x1, double y1, double x2, double y2)
{
	return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}