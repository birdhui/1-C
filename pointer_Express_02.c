// 2개의 정수의 합과 차를 동시에 반환하는 함수를 작성하고 테스트
// 포인터 매개 변수 사용

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void get_sum_diff(int x, int y, int* p_sum, int* p_diff);

int main()
{
	int x, y, *p_sum, *p_diff;

	printf("2개의 정수를 입력하세요: ");
	scanf("%d %d", &p_sum, &p_diff);

	get_sum_diff(x, y, &x, &y);

	printf("원소들의 합=%d\n원소들의 차=%d\n", p_sum, p_diff);

	return 0;
}

void get_sum_diff(int x, int y, int* p_sum, int* p_diff)
{
	*p_sum = x + y;	// 포인터 선언
	*p_diff = x - y;	// 포인터 선언
}