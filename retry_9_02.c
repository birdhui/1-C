// 크기가 10인 1차원 배열에 난수를 저장
// 최댓값과 최솟값 출력

#include <stdio.h>
#include <limits.h>		// 자료형의 최댓값과 최솟값이 정의된 헤더 파일
#include <stdlib.h>
#include <time.h>

int main()
{
	int i, min, max = 0;
	int num[10] = { 0 };
	srand(time(NULL));

	for (i = 0; i < 10; i++) {
		num[i] = rand();
		if (max < num[i]) {
			max = num[i];
		}    
		min = INT_MAX;
		if (min > num[i]) {
			min = num[i];
		}
	}
	printf("최대값은 %d\n", max);
	printf("최소값은 %d\n", min);

	return 0;
}