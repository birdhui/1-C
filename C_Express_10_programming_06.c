// C_Express_10_programming_06
// 2���� ǥ�� �迭�� �����ϰ�
// �� ���� �հ�, �� ���� �հ踦 ���Ͽ� ����ϴ� ���α׷��� �ۼ��϶�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, j, result = 0;
	int n[3][5] = {
		{12, 56, 32, 16, 98},
		{9, 56, 34, 41, 3},
		{65, 3, 87, 78, 21}
	};

	for (i = 0; i < 3; i++) { // 0���� 2�����
		for (j = 0; j < 5; j++) { // 0���� 4������
			result += n[i][j];
		}
		printf("%d���� �հ�: %d\n", i, result);
	}

	for (i = 0; i < 5; i++) { // 0���� 4������
		for (j = 0; j < 3; j++) { // 0���� 2�����
			result += n[j][i];
		}
		printf("%d���� �հ�: %d\n", i, result);
	}

	return 0;
}