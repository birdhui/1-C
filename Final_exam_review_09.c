#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct student {
	int number;
	char name[20];
	double grade;
}STU;

int main()
{
	int i, size, stu_size;
	STU stu, s[30];

	printf("�л��� ��: ");
	scanf("%d", &size);

	for (i = 0; i < size; i++) {
		printf("�й��� �Է��Ͻÿ�: ");
		scanf("%d", &s[i].number);
		printf("�̸��� �Է��Ͻÿ�: ");
		scanf("%s", s[i].name);
		printf("������ �Է��Ͻÿ�(�Ǽ�): ");
		scanf("%lf", &s[i].grade);
	}
	printf("\n");

	for (i = 0; i < size; i++) {
		printf("�й�: %d, �̸�: %s, ����: %lf\n", s[i].number, s[i].name, s[i].grade);
	}
	printf("\n");

	stu_size = sizeof(s) / sizeof(s[0]);
	stu = s[0];

	for (i = 1; i < stu_size; i++) {
		if (s[i].grade > stu.grade)
			stu = s[i];
	}

	printf("������ ���� ���� �л��� (�й�: %d, �̸�: %s, ����: %lf)�Դϴ�.\n", stu.number, stu.name, stu.grade);

	return 0;
}