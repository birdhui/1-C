// C_Express_10_programming_02
// ũ�Ⱑ 10�� 1���� �迭�� ������ ������ �Ŀ�,
// �ִ񰪰� �ּҰ��� ����ϴ� ���α׷��� �ۼ��϶�
// ������ rand()�Լ��� ȣ���� �����϶�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int x[10] = { 0 };
	int i, minimum, maximum;
	srand(time(NULL));

	for (i = 0; i < 10; i++) { // rand()�Լ��� �迭�� ������ �ʱ�ȭ
		x[i] = rand();
		printf("%d ", x[i]);
	}

	int min = x[0], max = 0; // ù ��° �迭 ��Ҹ� �ּҰ�(min)���� ����

	for (i = 0; i < 10; i++) {
		if (x[i] > max) {
			max = x[i];
		}
		else if (x[i] < min) { //������ �ּҰ����� �迭 ��Ұ� ������, �迭 ��Ҹ� min�� �����Ѵ�.
			min = x[i];
		}
	}
	printf("�ִ밪�� %d\n�ּҰ��� %d\n", max, min);

	return 0;
}