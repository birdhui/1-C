// 포인터를 멤버로 가지는 구조체
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
	struct date *dob;	// 포인터가 구조체의 멤버
};

int main()
{
	struct date d = { 2000,01,31 };
	struct student s = { 2261062, "곽세희", 4.29 };
	
	// 구조체 변수 s의 멤버인 포인터 dob에 구조체 d의 주소를 대입했다.
	s.dob = &d;

	printf("학번: %d\n", s.number);
	printf("이름: %s\n", s.name);
	printf("학점: %.2lf\n", s.grade);
	printf("생년월일 : %d년 %d월 %d일\n", s.dob->year, s.dob->month, s.dob->day);

	return 0;
}