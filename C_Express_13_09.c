// ���Ŀ� ���Ͽ� ������ �̸�, Į�θ� ������ ����ü�� ǥ��
// ����ڰ� �Ϸ� ���� ���� ���ĵ��� �Է¹޾� ����ü �迭�� ���� ��
// ������ Į�θ��� ����ϴ� ���α׷� �ۼ�

#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>
#include <stdlib.h>

typedef struct food {
	char name[20];
	int calories;
}FOOD;

FOOD food_array[] = {
	{ "����", 1200 },
	{ "��", 300 },
	{ "������", 600 }
};

int main()
{
	int sum = 0;
	FOOD mill;
	mill = food_array[0];

	for (int i = 0; i < 3; i++) {
		mill = food_array[i];
		printf("���� ���� ���ĵ�: %s\n", mill.name);
	}

	// ������ �� ������ �𸣰��� �Ф�
	// ����ü �迭�� �������� �����ϱ� ��

	for (int i = 0; i < 3; i++) {
		sum += food_array[i].calories;
	}

	printf("�� Į�θ�: %d\n", sum);

	return 0;
}