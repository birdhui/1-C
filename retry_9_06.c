// 2차원 표를 배열로 생성하고, 각 열의 합계를 구하여 출력하는 프로그램

#include <stdio.h>

int main()
{
	int i, j, sum;
	int num[3][5] = { { 12,56,32,16,98 },
					  { 99,56,34,41,3},
				      { 65,3,87,78,21} };

	// 각 행의 합계
	for (i = 0; i < 3; i++) {
		sum = 0;		// 반복문이 계속 돌면서 sum에 값이 누적되기 때문에 sum 값을 초기화시켜줘야 함
		for (j = 0; j < 5; j++) {
			sum += num[i][j];
		}
		printf("%d행의 합계: %d\n", i, sum);
	}

	// 각 열의 합계
	for (i = 0; i < 5; i++) {
		sum = 0;
		for (j = 0; j < 3; j++) {
			sum += num[j][i];
		}
		printf("%d열의 합계: %d\n", i, sum);
	}

	return 0;
}