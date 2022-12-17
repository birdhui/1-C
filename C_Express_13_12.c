// 포커 게임에 사용되는 카드를 구조체 card로 정의, 52개 카드를 배열로 나타내라
// 52개의 카드를 적절한 값으로 초기화, 값을 출력하는 프로그램
// 카드의 타입은 하나의 문자로 표현, 멤버의 이름은 suit.
// suit는 c, d, h, s 의 값을 가질 수 있음

#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>

typedef struct card {
	int value;
	char suit;
}CARD;

int main()
{
	int i;
	CARD c[52];

	for (i = 0; i < 13; i++) {
		c[i].suit = 'c';
		c[i].value = i + 1;		// value값에도 i값이 저장이 되어야 번호가 새겨져 출력됨
		printf("%d:%c ", c[i].value, c[i].suit);
	}
	for (i = 13; i < 26; i++) {
		c[i].suit = 'd';
		c[i].value = i + 1;
		printf("%d:%c ", c[i].value-13, c[i].suit);		// value 값에서 i값만큼 빼줘야 1부터 시작함
	}
	for (i = 26; i < 39; i++) {
		c[i].suit = 'h';
		c[i].value = i + 1;
		printf("%d:%c ", c[i].value-26, c[i].suit);
	}
	for (i = 39; i < 52; i++) {
		c[i].suit = 's';
		c[i].value = i + 1;
		printf("%d:%c ", c[i].value-39, c[i].suit);
	}

	return 0;
}