#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>
#define SIZE 100

typedef struct email {
	char title[SIZE];
	char sender[SIZE];
	char receiver[SIZE];
	char content[SIZE];
	char date[SIZE];
	int pri;
}email;

int main()
{
	email e = { "안부 메일", "chulsoo@pcu.ac.kr", "hsh@pcu.ac.kr", "안녕하시렵니까? 별일 없으시렵니까?", "2020/12/17",1 };

	printf("제목: %s\n수신자: %s\n발신자: %s\n내용: %s\n날짜: %s\n우선순위: %d\n", e.title, e.sender, e.receiver, e.content, e.date, e.pri);

	return 0;
}