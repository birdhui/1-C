// ���� �迭�� �޾Ƽ� ��ҵ��� ������ ä��� �Լ��� �ۼ��ϰ� �׽�Ʈ

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

void array_fill(int* A, int size);

int main()
{
	int a[SIZE] = { 0 };
	srand(time(NULL));		// srand�Լ��� �迭 �ʱ�ȭ

	array_fill(a, SIZE);	// a �迭 = �ּҸ� ���ϱ� ������ & ���� ����

	return 0;
}

void array_fill(int* A, int size)
{
	int i;
	
	for (i = 0; i < size; i++) {
		A[i] = rand() % 100000;			// 10,000�� �ڸ����� ���� ����
		printf("%d ", A[i]);
	}
}