// �־��� ���� �迭���� Ž���Ͽ� �ε����� ��ȯ�ϴ� �Լ� �ۼ��ϱ�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int search(int* A, int size, int search_value);

int main()
{
	int A[10] = { 100,200,50,0 };

	printf("������ 200������ ����� �ε���: A[%d]", search(A, 10, 200));

	return 0;
}

int search(int* A, int size, int search_value)
{
	int i;
	for (i = 0; i < size; i++) {
		if (A[i] == search_value)
			return i;
	}
}