// �����͸� ����� ������ ����ü
#include <stdio.h>

struct date {
	int year;
	int month;
	int day;
};

struct student {
	int number;
	char name[20];
	double grade;
	struct date *dob;	// �����Ͱ� ����ü�� ���
};

int main()
{
	struct date d = { 2000,01,31 };
	struct student s = { 2261062, "������", 4.29 };
	
	// ����ü ���� s�� ����� ������ dob�� ����ü d�� �ּҸ� �����ߴ�.
	s.dob = &d;

	printf("�й�: %d\n", s.number);
	printf("�̸�: %s\n", s.name);
	printf("����: %.2lf\n", s.grade);
	printf("������� : %d�� %d�� %d��\n", s.dob->year, s.dob->month, s.dob->day);

	return 0;
}