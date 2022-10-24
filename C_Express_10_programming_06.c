// C_Express_10_programming_06
// 2차원 표를 배열로 생성하고
// 각 행의 합계, 각 열의 합계를 구하여 출력하는 프로그램을 작성하라

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, j, result = 0;
	int n[3][5] = {
		{12, 56, 32, 16, 98},
		{9, 56, 34, 41, 3},
		{65, 3, 87, 78, 21}
	};

	for (i = 0; i < 3; i++) { // 0부터 2행까지
		for (j = 0; j < 5; j++) { // 0부터 4열까지
			result += n[i][j];
		}
		printf("%d행의 합계: %d\n", i, result);
	}

	for (i = 0; i < 5; i++) { // 0부터 4열까지
		for (j = 0; j < 3; j++) { // 0부터 2행까지
			result += n[j][i];
		}
		printf("%d행의 합계: %d\n", i, result);
	}

	return 0;
}