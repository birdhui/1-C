// ������¸� ��Ÿ���� ����ü�� ����, ����ü ������ �����ߴ� ����ϴ� ���α׷�
#include <stdio.h>

struct account {
	int number;
	char name[20];
	int balance;
};

int main()
{
	struct account count = { 1, "ȫ�浿", 100000 };

	printf("{ %d, %s, %d }\n", count.number, count.name, count.balance);

	return 0;
}