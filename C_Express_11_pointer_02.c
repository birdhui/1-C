// ���� �迭�� �޾Ƽ� ��ҵ��� ������ ä��� �Լ��� �ۼ��ϰ� �׽�Ʈ
// ������ rand()�Լ� Ȱ��
// ������ �Ű� ���� Ȱ��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void array_fill(int* A, int size);

int main()
{
	int B[10] = { 0 };
	srand(time(NULL));

	printf("�Լ� ȣ�� �� �ε���\n");
	for (int i = 0; i < 10; i++) {
		printf("%d ", B[i]);
	}
	printf("\n");

	array_fill(B, 10);
	printf("�Լ� ȣ�� �� �ε���\n");
	for (int i=0; i < 10; i++) {
		printf("%d ", B[i]);
	}

	return 0;
}

// *A[] = &B[]
// A = B
void array_fill(int* A, int size)
{
	int i;
	for (i = 0; i < size; i++) {
		// �迭�� ������ ��ü�ϱ� *�� ������ �ʾƵ� ��?
		A[i] = rand();
	}
}