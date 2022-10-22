// 배열 선언
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
// 배열의 크기가 변경되면 SIZE 정의만 변경

int main()
{
	int i, scores[SIZE];

	for (i = 0; i < SIZE; i++)
	{
		printf("%d번째, 점수를 입력하시오: ", i + 1);
		// 0부터 시작이니까 +1
		scanf("%d", scores[i]);
	}

	for (i = 0; i < SIZE; i++)
		printf("scores[%d]=%d\n", i, scores[i]);

	return 0;
}