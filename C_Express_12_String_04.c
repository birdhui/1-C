// �Լ��� �̿��� �Է¹��� ���ڿ� �ȿ� �ִ� ������ �󵵼��� ���� ���α׷�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int str_chr(char* s, int c);

int main()
{
	char string[100];
	int ch;

	printf("���ڿ��� �Է��Ͻÿ�: ");
	// ���ڿ��� �о �迭�� �����ϴ� �Լ�
	gets(string);

	for (ch = 'a'; ch <= 'z'; ch++) {
		printf("%c: %d\n", ch, str_chr(string, ch));
	}

	return 0;
}

int str_chr(char* s, int *c)
{
	int i, count = 0;

	for (i = 0; s[i] != NULL; i++) {	// �迭 s[i]�� NULL�� �ƴ϶��
		if (s[i] == c)	// s[i]�� ã������ ���� c���
			count++;	// count���� �������Ѷ�
	}
	return count;		// count���� ��ȯ

}