// �迭 ����_������ ���� �������� ��ձ��ϱ�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define STUDENTS 5
// �迭�� ũ�Ⱑ ����Ǹ� SIZE ���Ǹ� ����

int main()
{
	int i, sum = 0, scores[STUDENTS];
	double average = 0;
	srand(time(NULL));

	for (i = 0; i < STUDENTS; i++)
		scores[i] = rand() % 100;
	// ���� �߻���Ű�� �Լ��� ������ ������ ������ ����

	for (i = 0; i < STUDENTS; i++)
		printf("scores[%d]=%d\n", i, scores[i]);

	for (i = 0; i < STUDENTS; i++)
		sum += scores[i]; // sum ���� ������ ������Ŵ
	average = sum / STUDENTS; // ��� ���ϱ�

	printf("������ ���� %d�̰� ���� ����� ���� %lf�Դϴ�.\n",i, average);

	return 0;
}