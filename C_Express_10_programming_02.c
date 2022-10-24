// C_Express_10_programming_02
// 크기가 10인 1차원 배열에 난수를 저장한 후에,
// 최댓값과 최소값을 출력하는 프로그램을 작성하라
// 난수는 rand()함수를 호출해 생성하라

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int x[10] = { 0 };
	int i, minimum, maximum;
	srand(time(NULL));

	for (i = 0; i < 10; i++) { // rand()함수로 배열을 난수로 초기화
		x[i] = rand();
		printf("%d ", x[i]);
	}

	int min = x[0], max = 0; // 첫 번째 배열 요소를 최소값(min)으로 가정

	for (i = 0; i < 10; i++) {
		if (x[i] > max) {
			max = x[i];
		}
		else if (x[i] < min) { //현재의 최소값보다 배열 요소가 작으면, 배열 요소를 min에 저장한다.
			min = x[i];
		}
	}
	printf("최대값은 %d\n최소값은 %d\n", max, min);

	return 0;
}