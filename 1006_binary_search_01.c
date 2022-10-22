// 난수 발생시켜서 binary search_이진 탐색하기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10
int selection_sort(int grade[]);
int binary_search(int grade[], int n, int key);
// 같은 코드 쓰기때문에 함수로 묶기
void print_array(int grade[]);

int main()
{
	int i, key;
	int grade[SIZE];                    
	srand(time(NULL));

	for (i = 0; i < SIZE; i++)
		grade[i] = rand() % 100;

	printf("정렬 전 배열 :");
	print_array(grade); // 함수 호출

	selection_sort(grade); // 함수 호출

	printf("\n정렬 후 배열 :");
	print_array(grade);
	printf("\n");
	
	printf("탐색할 값을 입력하세요 :");
	scanf("%d", &key);

	printf("탐색 결과 = %d\n", binary_search(grade, SIZE, key));

	return 0;
}

// 난수 발생 정렬시키는 함수
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

// 이진 탐색 함수
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

// void = return 값을 안주고 출력만 해도 되니까 void 함수로 만들기
void print_array(int grade[])
{
	for (int i = 0; i < SIZE; i++)
		printf(" %d ", grade[i]);
} 