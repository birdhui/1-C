// 2차원 공간에 있는 점의 좌표를 받아서 점이 속하는 사분면의 번호를 반환하는 함수를 만들어라
// 앞의 문제 point 구조체 활용
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

	result = quadrant(&pp);	// 포인터 매개 변수 함수기 때문에 주소값을 지정해줘야 함
	printf("(%d, %d)의 사분면 = %d\n", pp.x, pp.y, result);

	return 0;
}

int quadrant(point *p)	// p를 포인터 매개 변수로 선언
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