// ���� ���� �����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	FILE* fp = NULL;
	fp = fopen("sample.txt", "w");	// w: ���� ���

	if (fp == NULL)
		printf("���� ���� ����\n");
	else
		printf("���� ���� ����\n");

	fputc('a', fp);	// fputc()�Լ��� �̿��� �ϳ��� ���ڸ� fp�� ����Ű�� ���Ͽ� ����.
	fputc('b', fp);	// sample.txt�� ����� abc�� �����ִ�.
	fputc('c', fp);
	fclose(fp);

	return 0;
}