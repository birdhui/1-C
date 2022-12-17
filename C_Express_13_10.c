// 직원을 나타내는 구조체
// 사번(정수), 이름(문자열), 전화번호(문자열), 나이(정수)
// 이 중에서 나이가 20 이상 30 이하인 직원을 찾아 출력

#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>

typedef struct employee {
	int number;
	char name[20];
	char phone[14];
	int age;
}employee;

// 구조체 배열 전역변수로 선언
employee staff[] = {
	{1, "홍길동1", "010-1234-1234", 20},
	{2, "홍길동2", "010-1234-1234", 22},
	{3, "홍길동3", "010-1234-1234", 32},
	{4, "홍길동4", "010-1234-1234", 33},
	{5, "홍길동5", "010-1234-1234", 41},
	{6, "홍길동6", "010-1234-1234", 18},
	{7, "홍길동7", "010-1234-1234", 19},
	{8, "홍길동8", "010-1234-1234", 24},
	{9, "홍길동9", "010-1234-1234", 26},
	{10, "홍길동10", "010-1234-1234", 31},
};

int main()
{
	int i;
	employee age_staff;
	age_staff = staff[0];	// 구조체 변수 = 구조체 전역 배열로 이어주기

	for (i = 0; i < 10; i++) {
		if (staff[i].age >= 20 && staff[i].age <= 30) {
			age_staff = staff[i];
			printf("이름=%s 나이=%d\n", age_staff.name, age_staff.age);
		}
	}

	return 0;
}