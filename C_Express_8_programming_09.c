// C_Express_8_programming_09
// Rand()�� �ѹ� ȣ��� ������ 0���� 32767������ ������ ���� Ȯ���� �����Ͽ� ��ȯ�Ѵ�.
// Rand()�Լ��� �̿��Ͽ� 0 �Ǵ� 1 ���� �������� ��ȯ�ϴ� �Լ� b_rand()�� �ۼ��ϰ� 5�� ȣ���Ͽ� ����.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int b_rand();

int main()
{
	int i;
	srand(time(NULL));

	for (i = 0; i < 5; i++) {
		printf("%d", b_rand());
	}
	printf("\n");

	return 0;
}

int b_rand()
{
	return rand() % 2;
}