// 구조체 배열을 선언해 전화번호부를 구성
// 3명의 데이터를 사용자로부터 받아 저장
// 사용자로부터 이름을 입력바다 전화번호를 검색하는 프로그램

#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>
#include <string.h>
#define SIZE 3

typedef struct phone {
	char name[20];
	char number_home[10];
	char number_my[10];
}PHONE;

int main()
{
	int i;
	char find[20];	// 찾아야 할 이름을 배열에 저장해서 구조체 배열과 비교하기 위해 배열 선언
	PHONE call[20];

	for (i = 0; i < SIZE; i++) {
		printf("이름을 입력하시오: ");
		scanf("%s", &call[i].name);	// 구조체 scanf()사용시 & 주소 붙여주기
		printf("집전화번호를 입력하시오: ");
		scanf("%s", &call[i].number_home);
		printf("휴대폰번호를 입력하시오: ");
		scanf("%s", &call[i].number_my);
	}

	printf("검색할 이름을 입력하시오: ");
	scanf("%s", &find);

	for (i = 0; i < SIZE; i++) {
		if (strcmp(find, call[i].name) == 0) {
			printf("집전화번호: %s\n", call[i].number_home);
			printf("휴대폰번호: %s\n", call[i].number_my);
		}
	}

	return 0;
}