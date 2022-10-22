// 선택 정렬 최소값찾기, 변수의 값을 서로 교환하기
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

	// 바깥쪽 for문 : SIZE-1하는 이유 : 마지막 원소는 비교하지 않아도 됨
	for (i = 0; i < SIZE - 1; i++)
	{
		least = i; // i번째에 있는 값이 최소값으로 가정하는 것

		// 안쪽 for문 : 비교, i+1 번째 원소부터 배열의 마지막 원소 중에 최소값 찾기
		for (j = i + 1; j < SIZE; j++)
			// 현재의 최소값 : list[least]보다 list[j]가 작으면 least에 j를 저장하기
			if (list[j] < list[least])
				least = j;

		temp = list[i]; // 인덱스의 의해 값이 변경 
		list[i] = list[least];
		list[least] = temp;
	}
	

	// i가 SIZE보다 작을 때까지 
	for (i = 0; i < SIZE; i++)
		printf("%d ", list[i]);
	printf("\n");

	return 0;
}