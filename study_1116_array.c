// 5개의 정수 중에서 최댓값과 최솟값의 위치를 출력하는 프로그램

#define _CRT_SECURE_NO_WARNINGS
#include <limits.h>
#include <stdio.h>
#define NUMBER 5

int main()
{
	int i, min, max, index;
	int array[NUMBER];
	max = 0;
	index = 0;
	// array[0] ~ array[4] : 총 5개가 들어갈 수 있는 크기의 배열 선언
	// 

	// 최댓값 구하기
	printf("5개의 정수를 입력해주세요: ");

	for (i = 0; i < NUMBER; i++) {
		scanf("%d", &array[i]);
		if (max < array[i]) {
			max = array[i];
			index = i;
		}
	}
	printf("가장 큰 값은 %d입니다. 그리고 %d번째에 있습니다.\n", max, index + 1);

	// 최솟값 구하기
	printf("5개의 정수를 입력해주세요: ");
	min = INT_MAX;	// int형이 가질 수 있는 최대 수 (거의 20억 정도)
	for (i = 0; i < NUMBER; i++) {
		scanf("%d", &array[i]);
		if (min > array[i]) {
			min = array[i];
			index = i;
		}
	}
	printf("가장 작은 값은 %d입니다. 그리고 %d번째에 있습니다.\n", min, index + 1);

	return 0;
}