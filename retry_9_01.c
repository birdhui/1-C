// 배열 days[]를 초기화하고 배열 요소의 값을 다음과 같이 출력

#include <stdio.h>
#define NUMBER 12

int main()
{
	int days[NUMBER] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	for (int i = 0; i < 12; i++) {
		printf("%d월은 %d일까지 있습니다.\n", i + 1, days[i]);
	}

	return 0;
}