// �̸����� ǥ���� �� �ִ� ����ü ����, ������ �ʱⰪ �ο��ϰ� ����ϴ� ���α׷� �ۼ�
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

	printf("����: ");
	scanf("%s", m.title);
	printf("������: ");
	scanf("%s", m.sender);
	printf("�߽���: ");
	scanf("%s", m.receiver);
	printf("����: ");
	scanf("%s", m.content);
	printf("��¥: ");
	scanf("%s", m.date);
	printf("�켱����: ");
	scanf("%s", m.pri);

	printf("\n����: %s\n������: %s\n�߽���: %s\n����: %s\n��¥ %s\n�켱����: %s\n", m.title, m.sender, m.receiver, m.content, m.date, m.pri);

	return 0;
}