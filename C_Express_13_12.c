// ��Ŀ ���ӿ� ���Ǵ� ī�带 ����ü card�� ����, 52�� ī�带 �迭�� ��Ÿ����
// 52���� ī�带 ������ ������ �ʱ�ȭ, ���� ����ϴ� ���α׷�
// ī���� Ÿ���� �ϳ��� ���ڷ� ǥ��, ����� �̸��� suit.
// suit�� c, d, h, s �� ���� ���� �� ����

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
		c[i].value = i + 1;		// value������ i���� ������ �Ǿ�� ��ȣ�� ������ ��µ�
		printf("%d:%c ", c[i].value, c[i].suit);
	}
	for (i = 13; i < 26; i++) {
		c[i].suit = 'd';
		c[i].value = i + 1;
		printf("%d:%c ", c[i].value-13, c[i].suit);		// value ������ i����ŭ ����� 1���� ������
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