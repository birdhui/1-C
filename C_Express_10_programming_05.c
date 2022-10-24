// C_Express_10_programming_05
// 0부터 9까지의 난수를 100번 생성해
// 가장 많이 생성된 수를 출력하는 프로그램을 작성하라
// 본문의 빈도수 구하는 예제를 참고
// 0에서 9까지의 난수는 rand()%10으로 구할 수 있음

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int i, max = 0;
	int x[10] = { 0 };
	srand(time(NULL));

	for (i = 0; i < 100; i++) { // 0부터 9까지의 난수를 100번 생성해 배열에 저장
		x[rand() % 10]++;
	}

	for (i = 0; i < 10; i++) {
		printf("n[%d] = %d\n", i, x[i]);
		if (x[i] > x[max]) {
			max = i;
		}
	}
	printf("가장 많이 나온 수=%d\n", max);

	return 0;
}