// C_Express_9_programming_08
// 주어진 정수가 몇 개의 자리ㅁ수를 가지고 있는지를 계산하는 프로그램을 순환을 이용해 작성해보자
// 예를 들어 12345의 경우 5가 출력된다

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int number(int x);

int main()
{
	int x;

	printf("정수를 입력하시오: ");
	scanf("%d", &x);

	number(x);

	return 0;
}

int number(int x)
{
	/** if - while문으로 푸는 방법
	if (x == 0) {
		return 0;
	}
	while (x != 0) {
		return 1 + number(x / 10);
	}
	return 0;
	*/

	// 순환호출 이용
	static int count = 1;

	if (x / 10 > 0) {		// x값이 0이 될 때까지 count값 증가시키기
		count++;
		number(x / 10);
	}
	else
		printf("자리수의 개수: %d\n", count);
	return 0;
}