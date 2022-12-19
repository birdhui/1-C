#include <stdio.h>

int main()
{
	char str[] = "abcdefghij";
	char* p = NULL;
	int i;
	p = str + 4;

	for (i = 0; i < 5; i++) {
		*p = '2' + i;
	}
	printf("str = %s\n", str);

	return 0;
}