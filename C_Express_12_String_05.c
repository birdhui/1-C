#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
void str_ch(char* ch);

int main()
{
	char ch;
	
	printf("문자를 입력하시오: ");
	scanf("%c", &ch);

	str_ch(&ch);

	return 0;
}

void str_ch(char* ch)
{
	while (ch != NULL) {
		if (isupper(ch)) {
			printf("%c", tolower(ch));
		}
		else
			printf("%c", toupper(ch));
	}
}