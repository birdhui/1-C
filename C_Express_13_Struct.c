// 2���� ���� ���� ���� ����ü�� ǥ���ϱ�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

// ����ü �Լ� ����
struct point {
	int x;
	int y;
};

int main()
{
	// ����ü point�� ���� - ����Ǵ� ��ġ �Լ� �����̹Ƿ� �ڵ� ������ �ǰ� �ʱⰪ�� �����Ⱚ
	struct point p1, p2;
	// xdiff = x��ǥ�� ���� ydiff = y��ǥ�� ����
	int xdiff, ydiff;
	// �� �� ������ �Ÿ��� �Ǽ��̹Ƿ� dist ����
	double dist;

	printf("���� ��ǥ�� �Է��Ͻÿ�(x, y): ");
	scanf("%d %d", &p1.x, &p1.y);

	printf("���� ��ǥ�� �Է��Ͻÿ�(x, y): ");
	scanf("%d %d", &p2.x, &p2.y);

	xdiff = p1.x - p2.x;;
	ydiff = p1.y - p2.y;

	dist = sqrt((double)(xdiff * xdiff + ydiff * ydiff));
	printf("�Ÿ��� %lf�Դϴ�.\n", dist);

	return 0;
}