// 포인터를 통한 구조체 참조
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

	printf("학번을 입력하시오: ");
	scanf("%d", p->number);
	printf("이름을 입력하시오: ");
	scanf("%s", (*p).name);
	printf("성적을 입력하시오: ");
	scanf("%lf", p->grade);

	printf("학번=%d 이름=%s 학점=%lf", p->number, p->name, p->grade);

	return 0;
}