// ���� ���� �ּҰ�ã��, ������ ���� ���� ��ȯ�ϱ�
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

int main()
{
	int i, j, temp, least;
	int list[SIZE] = { 3,2,4,5,7,6,9,1,0,8 };

	srand(time(NULL));

	for (i = 0; i < SIZE; i++)
		list[i] = rand() % 100;

	// �ٱ��� for�� : SIZE-1�ϴ� ���� : ������ ���Ҵ� ������ �ʾƵ� ��
	for (i = 0; i < SIZE - 1; i++)
	{
		least = i; // i��°�� �ִ� ���� �ּҰ����� �����ϴ� ��

		// ���� for�� : ��, i+1 ��° ���Һ��� �迭�� ������ ���� �߿� �ּҰ� ã��
		for (j = i + 1; j < SIZE; j++)
			// ������ �ּҰ� : list[least]���� list[j]�� ������ least�� j�� �����ϱ�
			if (list[j] < list[least])
				least = j;

		temp = list[i]; // �ε����� ���� ���� ���� 
		list[i] = list[least];
		list[least] = temp;
	}
	

	// i�� SIZE���� ���� ������ 
	for (i = 0; i < SIZE; i++)
		printf("%d ", list[i]);
	printf("\n");

	return 0;
}