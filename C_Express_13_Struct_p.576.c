// ����ü�� �迭�� ����ϴ� ����
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
		printf("�й��� �Է��Ͻÿ�: ");
		scanf("%d", &list[i].number);
		
		// name[]�� ���� �迭�̹Ƿ� scanf()���� �ּ� ������ &�� ������� �ʾ���
		// �迭�� �̸��� �� ��ü�� ������
		// &list[i].name  ==  &((list[i]).name)
		printf("�̸��� �Է��Ͻÿ�: ");
		scanf("%s", list[i].name);
		printf("������ �Է��Ͻÿ�(�Ǽ�): ");
		scanf("%lf", &list[i].grade);
	}

	// �ݺ� ������ �̿��� �迭 list[]�� ����� ������ ȭ�鿡 ����Ѵ�.
	for (i = 0; i < SIZE; i++) {
		printf("�̸�: %s, ����: %.2lf\n", list[i].name, list[i].grade);
	}

	return 0;
}