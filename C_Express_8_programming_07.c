// C_Express_8_programming_07
// 월급에 붙는 소득세를 계산하는 함수 get_tax(int income)을 작성하고 테스트해보자
// 과표 구간은 1000만원 이하 8%, 1000만원 초과는 10%로 되어 있다고 가정한다.
// 사용자로부터 소득을 입력받아 세금을 계산하는 프로그램을 작성하라

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

get_tax(int income); // 함수 선언

int main()
{
	int tax;

	printf("소득을 입력하세요(만원): ");
	scanf("%d", &tax);

	printf("소득세는 %d입니다.\n", get_tax(tax)); // 함수 호출

	return 0;
}

get_tax(int income) // 함수 정의
{
	if (income <= 1000)
		return income * 0.08;

	else if (income > 1000)
		return income * 0.1;
}