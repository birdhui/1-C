// 5���� ���� �߿��� �ִ񰪰� �ּڰ��� ��ġ�� ����ϴ� ���α׷�

#define _CRT_SECURE_NO_WARNINGS
#include <limits.h>
#include <stdio.h>
#define NUMBER 5

int main()
{
	int i, min, max, index;
	int array[NUMBER];
	max = 0;
	index = 0;
	// array[0] ~ array[4] : �� 5���� �� �� �ִ� ũ���� �迭 ����
	// 

	// �ִ� ���ϱ�
	printf("5���� ������ �Է����ּ���: ");

	for (i = 0; i < NUMBER; i++) {
		scanf("%d", &array[i]);
		if (max < array[i]) {
			max = array[i];
			index = i;
		}
	}
	printf("���� ū ���� %d�Դϴ�. �׸��� %d��°�� �ֽ��ϴ�.\n", max, index + 1);

	// �ּڰ� ���ϱ�
	printf("5���� ������ �Է����ּ���: ");
	min = INT_MAX;	// int���� ���� �� �ִ� �ִ� �� (���� 20�� ����)
	for (i = 0; i < NUMBER; i++) {
		scanf("%d", &array[i]);
		if (min > array[i]) {
			min = array[i];
			index = i;
		}
	}
	printf("���� ���� ���� %d�Դϴ�. �׸��� %d��°�� �ֽ��ϴ�.\n", min, index + 1);

	return 0;
}