// �Լ��� �̿��� �Է¹��� ���ڿ� �ȿ� Ư���� ������ ������ ���� ���α׷�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int str_chr(char* s, int c);

int main()
{
	char string[100];
	char str;

	printf("���ڿ��� �Է��Ͻÿ�: ");
	// ���ڿ��� �о �迭�� �����ϴ� �Լ�
	gets_s(string, 100);
	printf("������ �� ���ڸ� �Է��Ͻÿ�: ");
	scanf("%c", &str);	// �迭�� �ƴϱ� ������ & ���� ���� �� �ٿ��ֱ�!!

	printf("%c�� ����: %d", str, str_chr(string, str));

	return 0;
}

int str_chr(char* s, int c)
{
	int i, count = 0;

	for (i = 0; s[i] != NULL; i++) {	// �迭 s[i]�� NULL�� �ƴ϶��
		if (s[i] == c)	// s[i]�� ã������ ���� c���
			count++;	// count���� �������Ѷ�
	}
	return count;		// count���� ��ȯ
}