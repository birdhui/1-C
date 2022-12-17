#include <stdio.h>

struct data {
	int a;
	double b;
};

int main()
{
	struct data values[] = { 3, 4.5, 7, 2.5, 9, 7.4 };
	struct data* p = values + 2;

	printf("%d %lf\n", (values + 1)->a, (values + 1)->b);
	printf("%d %lf\n", values[0].a, values[0].b);
	printf("%d %lf\n", p->a, p->b);

	return 0;
}