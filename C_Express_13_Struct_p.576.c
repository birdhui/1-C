// 구조체의 배열을 사용하는 예제
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
	struct student list[SIZE];
	int i;

	for (i = 0; i < SIZE; i++) {
		printf("학번을 입력하시오: ");
		scanf("%d", &list[i].number);
		
		// name[]은 문자 배열이므로 scanf()에서 주소 연산자 &를 사용하지 않았음
		// 배열의 이름은 그 자체로 포인터
		// &list[i].name  ==  &((list[i]).name)
		printf("이름을 입력하시오: ");
		scanf("%s", list[i].name);
		printf("학점을 입력하시오(실수): ");
		scanf("%lf", &list[i].grade);
	}

	// 반복 루프를 이용해 배열 list[]에 저장된 값들을 화면에 출력한다.
	for (i = 0; i < SIZE; i++) {
		printf("이름: %s, 학점: %.2lf\n", list[i].name, list[i].grade);
	}

	return 0;
}