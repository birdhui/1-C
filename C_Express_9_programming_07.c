// C_Express_9_programming_07
// 순환 호출을 이용해 정수의 각 자리수를 출력하는 함수 show_digit(int x)를 작성하고 테스트하라
// 일의 자리를 출력하고 나머지 부분을 대상으로 다시 같은 함수를 순환 호출한다..
// 예를 들어 1234의 4를 출력하고 나머지 123을 가지고 다시 같은 함수를 순환 호출한다.
// 1234를 10으로 나누면 123이 되고 4는 1234를 10으로 나눈 나머지이다
// 정수 x를 10으로 나눈 값을 가지고 show_digit(x/10);와 같이 다시 순환호출하면 된다

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int show_digit(int x);

int main()
{
	int x; // 지역 변수

	printf("정수를 입력하시오: ");
	scanf("%d", &x);

	show_digit(x);

	return 0;
}

int show_digit(int x)
{
	if (x < 10) {
		return printf("%d ", x);
	}
	else
		show_digit(x / 10);
	return printf("%d ", x % 10);
}