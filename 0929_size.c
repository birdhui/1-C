// �迭 ����
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 5
// �迭�� ũ�Ⱑ ����Ǹ� SIZE ���Ǹ� ����

int main()
{
	int i, scores[SIZE];
	srand(time(NULL));
	// #include <time.h>, srand(time(NULL));
	// 0���� 99���� ���� �߻� �Լ� ���
	// srand �Լ��� ������ ������ �ٸ� �� �ޱ�

	for (i = 0; i < SIZE; i++)
		scores[i] = rand() % 100;

	for (i = 0; i < SIZE; i++)
		printf("scores[%d]=%d\n", i, scores[i]);

	return 0;
}