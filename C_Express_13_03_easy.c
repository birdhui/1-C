#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>
#define SIZE 100

typedef struct email {
	char title[SIZE];
	char sender[SIZE];
	char receiver[SIZE];
	char content[SIZE];
	char date[SIZE];
	int pri;
}email;

int main()
{
	email e = { "�Ⱥ� ����", "chulsoo@pcu.ac.kr", "hsh@pcu.ac.kr", "�ȳ��Ͻ÷ƴϱ�? ���� �����÷ƴϱ�?", "2020/12/17",1 };

	printf("����: %s\n������: %s\n�߽���: %s\n����: %s\n��¥: %s\n�켱����: %d\n", e.title, e.sender, e.receiver, e.content, e.date, e.pri);

	return 0;
}