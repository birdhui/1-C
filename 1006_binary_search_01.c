// ���� �߻����Ѽ� binary search_���� Ž���ϱ�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10
int selection_sort(int grade[]);
int binary_search(int grade[], int n, int key);
// ���� �ڵ� ���⶧���� �Լ��� ����
void print_array(int grade[]);

int main()
{
	int i, key;
	int grade[SIZE];                    
	srand(time(NULL));

	for (i = 0; i < SIZE; i++)
		grade[i] = rand() % 100;

	printf("���� �� �迭 :");
	print_array(grade); // �Լ� ȣ��

	selection_sort(grade); // �Լ� ȣ��

	printf("\n���� �� �迭 :");
	print_array(grade);
	printf("\n");
	
	printf("Ž���� ���� �Է��ϼ��� :");
	scanf("%d", &key);

	printf("Ž�� ��� = %d\n", binary_search(grade, SIZE, key));

	return 0;
}

// ���� �߻� ���Ľ�Ű�� �Լ�
int selection_sort(int grade[])
{
	int i, j, least, temp;
	for (i = 0; i < SIZE; i++)
	{
		least = i;
		for (j = i + 1; j < SIZE; j++)
			if (grade[j] < grade[least])
				least = j;

		temp = grade[i];
		grade[i] = grade[least];
		grade[least] = temp;
	}
	return 0;
}

// ���� Ž�� �Լ�
int binary_search(int grade[], int n, int key)
{
	int low, high, middle;
	low = 0;
	high = n - 1;

	while (low <= high)
	{
		printf("[%d %d]\n", low, high);
		middle = (low + high) / 2;
		if (key == grade[middle])
			return middle;
		else if (key > grade[middle])
			low = middle + 1;
		else
			high = middle - 1;
	}

	return -1;
}

// void = return ���� ���ְ� ��¸� �ص� �Ǵϱ� void �Լ��� �����
void print_array(int grade[])
{
	for (int i = 0; i < SIZE; i++)
		printf(" %d ", grade[i]);
} 