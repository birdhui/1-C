// ���� �迭�� ��ҵ��� ȭ�鿡 ����ϴ� �Լ��� �ۼ��ϰ� �׽�Ʈ
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void array_print(int* A, int size);

int main()
{
	int A[10] = { 1,2,3,4,0 };
	array_print(A, 10);

	return 0;
}

void array_print(int* A, int size)
{
	int i;
	printf("A[] = { ");

	for (i = 0; i < size; i++) {
		printf("%d ", A[i]);
	}
	printf("}\n");
}