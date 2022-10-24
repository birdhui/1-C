// C_Express_10_programming_04
// �迭 a�� �迭 b�� �����ϴ� �Լ� array_copy�� �ۼ��ϰ� �׽�Ʈ�϶�
// �� �Լ��� ��ȯ���� ����.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int array_copy(int a[], int b[], int size);

int main()
{
	int i;
	int a[10] = { 1, 2, 3, 0, 0, 0, 0, 0, 0, 0 };
	int b[10] = { 0 }; // �迭 �ʱ�ȭ

	for (i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");

	array_copy(a, b, 10); // �Լ� ȣ��

	for (i = 0; i < 10; i++) {
		printf("%d ", b[i]); // ����� b[]�迭 ���
	}
	printf("\n");

	return 0;
}

int array_copy(int a[], int b[], int size)
{
	int i;

	for (i = 0; i < size; i++) {
		if (a[i] != b[i]) // a�迭�� b�迭�� �ٸ��ٸ�
			b[i] = a[i];  // b�迭�� a�迭 ����
	}
	return 0;
}