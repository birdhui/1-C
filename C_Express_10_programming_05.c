// C_Express_10_programming_05
// 0���� 9������ ������ 100�� ������
// ���� ���� ������ ���� ����ϴ� ���α׷��� �ۼ��϶�
// ������ �󵵼� ���ϴ� ������ ����
// 0���� 9������ ������ rand()%10���� ���� �� ����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int i, max = 0;
	int x[10] = { 0 };
	srand(time(NULL));

	for (i = 0; i < 100; i++) { // 0���� 9������ ������ 100�� ������ �迭�� ����
		x[rand() % 10]++;
	}

	for (i = 0; i < 10; i++) {
		printf("n[%d] = %d\n", i, x[i]);
		if (x[i] > x[max]) {
			max = i;
		}
	}
	printf("���� ���� ���� ��=%d\n", max);

	return 0;
}