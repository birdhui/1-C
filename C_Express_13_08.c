// ���� �߽��� ��Ÿ���µ� point ����ü ���
// ���� ��Ÿ���� circle ����ü ����
// ���� ������ ����ϴ� �Լ� double area(struct circle c)
// ���� �ѷ��� ����ϴ� �Լ� double perimeter(struct circle c)
// typedef�� ����Ͽ� strutct circle�� CIRCLE�� ����

#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>
#include <stdlib.h>

// double area(CIRCLE c);
// double perimeter(CIRCLE c);

struct point {
	int x, y;
};

typedef struct circle {
	struct point center; // ���� �߽�
	double radius;		 // ���� ������
}CIRCLE;

double area(CIRCLE c)
{
	return c.radius * c.radius * 3.14;
}

double perimeter(CIRCLE c)
{
	return c.radius * 2 * 3.14;
}

int main()
{
	CIRCLE c;
	c.center.x = 0;
	c.center.y= 0;
	c.radius = 10;

	printf("���� �߽���: %d %d\n", c.center.x, c.center.y);
	printf("���� ������: %lf\n", c.radius);
	printf("���� ����=%lf, ���� �ѷ�=%lf\n", area(c), perimeter(c));

	return 0;
}