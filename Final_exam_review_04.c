#include <stdio.h>

int main()
{
	char str[] = "My C Sample Source";

	printf("%s\n", &str[4]);
	printf("%c\n", *(str + 5));

	return 0;
}