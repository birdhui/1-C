// 이메일을 표현할 수 있는 구조체 정의, 적당한 초기값 부여하고 출력하는 프로그램 작성
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 100

struct mail {
	char title[SIZE];
	char sender[SIZE];
	char receiver[SIZE];
	char content[SIZE];
	char date[SIZE];
	char pri[SIZE];
};

int main()
{
	struct mail m;

	printf("제목: ");
	scanf("%s", m.title);
	printf("수신자: ");
	scanf("%s", m.sender);
	printf("발신자: ");
	scanf("%s", m.receiver);
	printf("내용: ");
	scanf("%s", m.content);
	printf("날짜: ");
	scanf("%s", m.date);
	printf("우선순위: ");
	scanf("%s", m.pri);

	printf("\n제목: %s\n수신자: %s\n발신자: %s\n내용: %s\n날짜 %s\n우선순위: %s\n", m.title, m.sender, m.receiver, m.content, m.date, m.pri);

	return 0;
}