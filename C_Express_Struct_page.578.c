// �����͸� ���� ����ü ����
#include <stdio.h>

struct student {
	int number;
	char name[20];
	double grade;
};

int main()
{
	struct student s = { 2261062, "������", 4.29 };
	struct student * p;
	p = &s;

	printf("�й�=%d �̸�=%s ����=%.2lf\n", s.number, s.name, s.grade);
	printf("�й�=%d �̸�=%s ����=%.2lf\n", p->number, p->name, (*p).grade);

	return 0;
}