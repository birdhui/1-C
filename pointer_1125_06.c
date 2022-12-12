// ������ �迭 A[]�� ����Ǿ� ����, ȸ�翡�� ������ ������ �Ѿ��� ����϶�
// ������ �迭 ��ҵ��� ���� ���� ��ȯ�ϴ� �Լ� �ۼ�

#include <stdio.h>
#define SIZE 10
int array_sum(int* A, int size);

int main()
{
	int A[SIZE] = { 1,2,3,0 };

	printf("������ ��=%d\n", array_sum(A, SIZE));

	return 0;
}

int array_sum(int* A, int size)		// int *A = ������ �Ű� ����
{
	int i;
	int* p;
	int sum = 0;

	// ������ p�� �迭 A[]�� ���� ������.
	p = A;

	for (i = 0; i < size; i++) {
		sum += *p++;	// *p++ : *p�� ����Ű�� �ּ��� ���� ������Ų��.
	}

	return sum;			// sum ���� ��ȯ
						// ���� ��ȯ�ؾ� �ϱ� ������ int�� �Լ��� ����ؾ� ��
}