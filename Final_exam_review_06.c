#include <stdio.h>

typedef struct point {
	int x, y;
}POINT;

int main()
{
	POINT p1 = { 1,2 };
	POINT p2 = { 1,2 };

	printf("일치 여부 %d\n", equal(&p1, &p2));
}

int equal(POINT * pp1, POINT * pp2)
{
	if (pp1->x == pp2->x && pp1->y == pp2->y)
		return 1;
	else if (pp1 != pp2)
		return 0;
}