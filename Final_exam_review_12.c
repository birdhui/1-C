#include <stdio.h>

char ch = 'a';
int main()
{
	char ch = 'b';
	{
		char ch = 'c';
		ch = 'x';
	}
	printf("ch=%c\n", ch);

	return 0;
}