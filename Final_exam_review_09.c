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

	printf("학생의 수: ");
	scanf("%d", &size);

	for (i = 0; i < size; i++) {
		printf("학번을 입력하시오: ");
		scanf("%d", &s[i].number);
		printf("이름을 입력하시오: ");
		scanf("%s", s[i].name);
		printf("학점을 입력하시오(실수): ");
		scanf("%lf", &s[i].grade);
	}
	printf("\n");

	for (i = 0; i < size; i++) {
		printf("학번: %d, 이름: %s, 학점: %lf\n", s[i].number, s[i].name, s[i].grade);
	}
	printf("\n");

	stu_size = sizeof(s) / sizeof(s[0]);
	stu = s[0];

	for (i = 1; i < stu_size; i++) {
		if (s[i].grade > stu.grade)
			stu = s[i];
	}

	printf("학점이 가장 높은 학생은 (학번: %d, 이름: %s, 학점: %lf)입니다.\n", stu.number, stu.name, stu.grade);

	return 0;
}