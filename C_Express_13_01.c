// å�� ��Ÿ���� ����ü book�� ����, ���� ������ ����ü ������ ������ �� ȭ�鿡 ����ϴ� ���α׷�
#include <stdio.h>

struct book {
	int id;
	char title[100];
	char author[20];
};

int main()
{
	struct book b = { 1, "�ٶ��� �Բ� �������", "������ ��ÿ" };

	printf("{ %d, %s, %s }\n", b.id, b.title, b.author);

	return 0;
}