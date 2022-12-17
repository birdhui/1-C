// point 구조체의 두 점 좌표가 일치하면 1을 반환, 그렇지 않으면 0을 반환하는 함수를 만드릭
#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>
// int equal(point p1, point p2);
// 왜 함수 선언하니까 안되지? ㅠㅠ

typedef struct point {
	int x, y;
}point;

int main()
{
	int result;
	point p1, p2;
	p1.x = 1;
	p2.x = 3;
	p1.y = 2;
	p2.y = 5;

	result = equal(p1, p2);

	if (result == 1) {
		printf("(%d, %d) == (%d, %d)\n", p1.x, p2.x, p1.y, p2.y);
	}
	else if (result == 0) {
		printf("(%d, %d) != (%d, %d)\n", p1.x, p2.x, p1.y, p2.y);
	}

	return 0;
}

int equal(point p1, point p2)
{
	if (p1.x == p2.x && p1.y == p2.y) {
		return 1;
	}
	else
		return 0;
}