#include <stdio.h>

int main()
{
	int i = 80;
	int* p = &i;
	int** dp = &p;

	**dp = 90;
	*p = 100;

	printf("%d %d %d\n", i, *p, **dp);

	return 0;
}