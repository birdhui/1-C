// 2���� ������ �ִ� ���� ��ǥ�� �޾Ƽ� ���� ���ϴ� ��и��� ��ȣ�� ��ȯ�ϴ� �Լ��� ������
// ���� ���� point ����ü Ȱ��
#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>

typedef struct point {
	int x, y;
}point;

int main()
{
	int result;
	point pp;
	pp.x = -1;
	pp.y = 2;

	result = quadrant(&pp);	// ������ �Ű� ���� �Լ��� ������ �ּҰ��� ��������� ��
	printf("(%d, %d)�� ��и� = %d\n", pp.x, pp.y, result);

	return 0;
}

int quadrant(point *p)	// p�� ������ �Ű� ������ ����
{
	if (p->x > 0 && p->y > 0)
		return 1;
	else if (p->x < 0 && p->y>0)
		return 2;
	else if (p->x < 0 && p->y < 0)
		return 3;
	else if (p->x > 0 && p->y < 0)
		return 4;
}