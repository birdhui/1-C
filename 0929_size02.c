// �迭 ����
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
// �迭�� ũ�Ⱑ ����Ǹ� SIZE ���Ǹ� ����

int main()
{
	int i, scores[SIZE];

	for (i = 0; i < SIZE; i++)
	{
		printf("%d��°, ������ �Է��Ͻÿ�: ", i + 1);
		// 0���� �����̴ϱ� +1
		scanf("%d", scores[i]);
	}

	for (i = 0; i < SIZE; i++)
		printf("scores[%d]=%d\n", i, scores[i]);

	return 0;
}