// C_Express_10_programming_01
// 배열 days[]를 아래와 같이 초기화 하고 배열 오소의 값을 다음과 같이 출력하는 프로그램을 작성하라

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int days[] = { 31,29,31,30,31,30,31,31,30,31,30,31 };

	for (int i = 0; i < 12; i++) { // 인덱스(배열 번호)는 항상 0부터 시작
		printf("%d월은 %d일까지 있습니다.\n", i + 1, days[i]); // 인덱스 번호에 맞추면 0월부터니까 i+1을 해준다.
	}

	return 0;
}