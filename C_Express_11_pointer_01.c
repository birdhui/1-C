// 2개의 정수의 합과 차를 동시에 반환하는 함수를 작성하는 프로그램
// 포인터 매개 변수 활용
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void get_sum_diff(int x, int y, int* p_sum, int* p_diff);

int main()
{
	int sum = 0, diff = 0;
	get_sum_diff(100, 200, &sum, &diff);
	return 0;
}

/*	
	*p_sum = &sum

	 값을 담는 *p_sum에 &sum sum의 주소값을 담았기 때문에
	*p_sum에는 sum의 값이 담김
  
  -> 출력값을 낼 때도 *을 붙여야 구하려는 값이 나옴 *을 붙이지 않으면 주소값이 나옴
*/
void get_sum_diff(int x, int y, int* p_sum, int* p_diff)
{
	*p_sum = x + y;
	*p_diff = x - y;

	printf("원소들의 합: %d\n", p_sum);	// *을 붙이지 않았기 때문에 주소값이 나옴
	printf("원소들의 차: %d", *p_diff);	// *을 붙였기 때문에 값이 나옴
}