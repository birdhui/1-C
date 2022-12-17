// 원의 중심을 나타내는데 point 구조체 사용
// 원을 나타내는 circle 구조체 정의
// 원의 면적을 계산하는 함수 double area(struct circle c)
// 원의 둘레를 계산하는 함수 double perimeter(struct circle c)
// typedef를 사용하여 strutct circle을 CIRCLE로 정의

#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>
#include <stdlib.h>

// double area(CIRCLE c);
// double perimeter(CIRCLE c);

struct point {
	int x, y;
};

typedef struct circle {
	struct point center; // 원의 중심
	double radius;		 // 원의 반지름
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

	printf("원의 중심점: %d %d\n", c.center.x, c.center.y);
	printf("원의 반지름: %lf\n", c.radius);
	printf("원의 면적=%lf, 원의 둘레=%lf\n", area(c), perimeter(c));

	return 0;
}