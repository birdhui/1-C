// 2차원 공간 상의 점을 구조체로 표현하기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

// 구조체 함수 선언
struct point {
	int x;
	int y;
};

int main()
{
	// 구조체 point의 변수 - 선언되는 위치 함수 내부이므로 자동 변수가 되고 초기값은 쓰레기값
	struct point p1, p2;
	// xdiff = x좌표의 차이 ydiff = y좌표의 차이
	int xdiff, ydiff;
	// 두 점 사이의 거리는 실수이므로 dist 선언
	double dist;

	printf("점의 좌표를 입력하시오(x, y): ");
	scanf("%d %d", &p1.x, &p1.y);

	printf("점의 좌표를 입력하시오(x, y): ");
	scanf("%d %d", &p2.x, &p2.y);

	xdiff = p1.x - p2.x;;
	ydiff = p1.y - p2.y;

	dist = sqrt((double)(xdiff * xdiff + ydiff * ydiff));
	printf("거리는 %lf입니다.\n", dist);

	return 0;
}