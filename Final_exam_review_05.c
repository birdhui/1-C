// ȸ�� ã�� ���α׷� (Palindroms))
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
void palindrome(char *p);

int main()
{
	char s[100];

	printf("���ڿ� �Է�: ");
	scanf("%s", s);

	palindrome(s);

	return 0;
}

void palindrome(char *p)
{
	int i, len;

	len = strlen(p);

	for (i = 0; i < len / 2; i++) {
		if (p[i] != p[len - 1 - i]) {
			printf("ȸ���� �ƴ�\n");
			break;
		}
		else
			printf("ȸ����\n");
			break;
	}
}