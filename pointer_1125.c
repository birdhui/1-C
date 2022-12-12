// 2개의 정수의 합과 차를 동시에 반환하는 함수 작성
// 포인터 매개 변수 사용

#include <stdio.h>
void get_sum_diff(int x, int y, int* p_sum, int* p_diff);

int main()
{
	int sum = 0, diff = 0;		// 지역 변수 초기화

	get_sum_diff(100, 200, sum, &diff);

	printf("원소들의 합=%d\n원소들의 차=%d\n", &sum, &diff);
	// 포인터 변수는 &i처럼 주소와 연결해줘야 함

	return 0;
}

void get_sum_diff(int x, int y, int* p_sum, int* p_diff)
{
	*p_sum = x + y;
	*p_diff = x - y;
}