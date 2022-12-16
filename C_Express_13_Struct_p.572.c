// 사각형을 point 구조체로 나타내기
// 사각형 꼭지점의 좌표를 입력받아서 사각형의 면적과 둘레를 계산하는 프로그램
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

	printf("왼쪽 상단의 좌표를 입력하시오: ");
	scanf("%d %d", &r.p1.x, &r.p1.y);

	printf("왼쪽 상단의 좌표를 입력하시오: ");
	scanf("%d %d", &r.p2.x, &r.p2.y);

	w = r.p2.x - r.p1.x;	// 사각형의 가로
	h = r.p2.x - r.p1.x;	// 사각형의 세로

	area = w * h;
	peri = 2 * w + 2 * h;
	printf("면적은 %d이고 둘레는 %d입니다.\n", area, peri);

	return 0;
}