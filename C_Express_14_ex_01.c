// ���� ����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// FILE�� ����Ű�� ������ fp����
	FILE* fp = NULL;
	// fopen()�Լ��� ȣ���Ͽ� "sample.txt"�� ������ ����.
	// ���� ���� �̸��� ������ �ִٸ� ������ ������ ��������, ������ ������ ���� ���������.
	fp = fopen("sample.txt", "w");

	if (fp == NULL)
		printf("���� ���� ����\n");
	else
		printf("���� ���� ����\n");
	
	// fopen()�� ȣ�������� �ݵ�� fclose()�� ������ �ݾƾ� �Ѵ�.
	fclose(fp);

	return 0;
}