#include <stdio.h>
void increment(int*, int);

int main()
{
	int year[] = { 2006,2008,2010,2012,2014 };

	printf("%d\n", year[3]);	// 2012
	increment(&year, 10);		// year = &year[0]
	printf("%d\n", year[0]);	// 2006 + 0
	printf("%d\n", year[1]);	// 2008 + 10
	printf("%d\n", year[2]);	// 2010 + 20
	printf("%d\n", year[3]);	// 2012 + 30
	printf("%d\n", year[4]);	// 2014 + 40

	return 0;
}

void increment(int* p, int n)
{
	int i;
	for (i = 0; i < 5; i++) {
		*p++ += i * n;	// += 100
	}
}