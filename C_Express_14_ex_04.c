// fgetc()�� ����� ������ �����ߴ� ������ ������ ȭ�鿡 ǥ���غ���

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int c;
	FILE* fp = NULL;
	fp = fopen("sample.txt", "r");	// r : �б� ���, ȭ�鿡 ���

	if (fp == NULL)
		printf("���� ���� ����\n");
	else
		printf("���� ���� ����\n");

	// fgetc() : ������ ���Ϸκ��� ���� ���ڸ� �Է¹޴� �Լ�
	// EOF(End of File) : ������ ���� ��Ÿ���� Ư�� ����, -1�̴�.
	while ((c = fgetc(fp)) != EOF) {
		putchar(c);
	}
	fclose(fp);
	printf("\n");

	return 0;
}