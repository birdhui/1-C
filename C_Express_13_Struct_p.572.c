// �簢���� point ����ü�� ��Ÿ����
// �簢�� �������� ��ǥ�� �Է¹޾Ƽ� �簢���� ������ �ѷ��� ����ϴ� ���α׷�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct point {
	int x;
	int y;
};

struct rect {
	struct point p1;
	struct point p2;
};

int main()
{
	struct rect r;

	int w, h, area, peri;

	printf("���� ����� ��ǥ�� �Է��Ͻÿ�: ");
	scanf("%d %d", &r.p1.x, &r.p1.y);

	printf("���� ����� ��ǥ�� �Է��Ͻÿ�: ");
	scanf("%d %d", &r.p2.x, &r.p2.y);

	w = r.p2.x - r.p1.x;	// �簢���� ����
	h = r.p2.x - r.p1.x;	// �簢���� ����

	area = w * h;
	peri = 2 * w + 2 * h;
	printf("������ %d�̰� �ѷ��� %d�Դϴ�.\n", area, peri);

	return 0;
}