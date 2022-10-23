// C_Express_8_programming_06
// 간단한 기능을 하는 함수들을 작성하고,
// 사용자로부터 임의의 값을 입력받은 후에 작성한 함수들을 테스트하여 보자
// a. 주어진 정수가 짝수이면 1을 반환하고 홀수이면 0을 반환하는 함수 int even(int n)
// b. 주어진 정수의 절댓값을 구하는 함수 int absoulte(int n)
// c. 주어진 정수가 음수이면 -1을, 양수이면 1을, 0이면 0을 반환하는 함수 int sign(int n)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int even(int n); // 정수가 짝수 : 1을 반환, 홀수 : 0을 반환
int absoulte(int n); // 절댓값을 구하는 함수
int sign(int n); // 정수가 음수 : -1을 반환, 양수 : 1, 0이면 0을 반환

int main()
{
	int num = 0;

	printf("정수를 입력하시오: ");
	scanf("%d", &num);

	if (even(num) == 1) {
		printf("even()의 결과: 짝수\n");
	}
	else {
		printf("even()의 결과: 홀수\n");
	}

	printf("absoulte()의 결과: %d\n", absoulte(num));

	if (sign(num) == -1) {
		printf("sign()의 결과: 음수\n");
	}
	else if (sign(num) == 1) {
		printf("sign()의 결과: 양수\n");
	}
	else if (sign(num) == 0) {
		printf("sign()의 결과: 0\n");
	}

	return 0;
}

int even(int n)
{
	if (n % 2 == 0) {
		return 1;
	}
	else
		return 0;
}

int absoulte(int n)
{
	return abs(n);
}

int sign(int n)
{
	if (n < 0) {
		return -1;
	}
	else if(n > 0) {
		return 1;
	}
	else if (n == 0) {
		return 0;
	}
}