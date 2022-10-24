// C_Express_10_programming_03
// 2���� �迭 a,b�� �޾� �����Ǵ� �迭 ��Ұ� �������� �˻��ϴ� �Լ� array_equal(int a[], int b[], int size)�� �ۼ��ϰ� �׽�Ʈ��,
// a[0]�� b[0], a[1], b[1],...,a[size-1]�� b[size-1]�� ������ �˻�
// ��ü ��Ұ� ���ٸ� 1��ȯ �׷��� ������ 0��ȯ
// �ݺ� ������ �̿��� �迭�� �� ��Ұ� �������� �˻�, ���� �ϳ��� �ٸ��� 0�� ��ȯ

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int array_equal(int a[], int b[], int size);

int main()
{
	int i;
	int a[10] = { 0,0,0,0,0,0,0,0,0 }; // 0���� 9���� : 10���ϱ� a[10]
	int b[10] = { 0,0,0,0,0,0,0,0,0 };

	for (i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");

	for (i = 0; i < 10; i++) {
		printf("%d ", b[i]);
	}
	printf("\n");

	if (array_equal(a, b, 10) == 0)
		printf("2���� �迭�� �ٸ�\n");
	else if (array_equal(a, b, 10) == 1)
		printf("2���� �迭�� ����\n");

	return 0;
}

int array_equal(int a[], int b[], int size)
{
	int i;
	for (i = 0; i < size; i++) {
		if (a[i] != b[i]) // a�迭�� b�迭�� �ٸ��ٸ� 0�� ��ȯ
			return 0;
	}
	return 1; // a�迭�� b�迭�� ������ 1�� ��ȯ
}