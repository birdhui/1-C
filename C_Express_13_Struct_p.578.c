// �����͸� ���� ����ü ����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 3

struct student {
	int number;
	char name[20];
	double grade;
};

int main()
{
	struct student st;
	struct student* p;
	
	p = &st;

	printf("�й��� �Է��Ͻÿ�: ");
	scanf("%d", p->number);
	printf("�̸��� �Է��Ͻÿ�: ");
	scanf("%s", (*p).name);
	printf("������ �Է��Ͻÿ�: ");
	scanf("%lf", p->grade);

	printf("�й�=%d �̸�=%s ����=%lf", p->number, p->name, p->grade);

	return 0;
}