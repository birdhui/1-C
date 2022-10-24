// C_Express_9_programming_01
// 덧셈, 뺄셈, 곱셈, 나눗셈을 지원하는 계산기 프로그램을 작성해보자
// 각 연산들이 몇 번씩 계산되었는지를 기억하게 하자
// 각 연산을 지원하는 함수들은 자신이 호출된 횟수를 화면에 출력한다.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int num1, num2; // 전역 변수
char cal;

void plus(); // 함수 선언
void minus();
void mul();
void div();

int main()
{
	while (1) { // 참인 경우 무한반복 while문
		printf("연산을 입력하시오: ");
		scanf("%d%c%d", &num1, &cal, &num2);

		switch (cal) {
		case '+':
			plus();
			break;

		case '-':
			minus();
			break;

		case '*':
			mul();
			break;

		case '/':
			div();
			break;
		}
	}

	return 0;
}

void plus()
{
	static int a = 1; // 정적 지역 변수
	printf("덧셈은 총 %d번 실행되었습니다.\n", a);
	printf("연산 결과: %d\n", num1 + num2);
	a++;
}

void minus()
{
	static int b = 1;
	printf("뺄셈은 총 %d번 실행되었습니다.\n", b);
	printf("연산 결과: %d\n", num1 - num2);
	b++;
}

void mul()
{
	static int c = 1;
	printf("곱셈은 총 %d번 실행되었습니다.\n", c);
	printf("연산 결과: %d\n", num1 * num2);
	c++;
}

void div()
{
	static int d = 1;
	printf("나눗셈은 총 %d번 실행되었습니다.\n", d);
	printf("연산 결과: %d\n", num1 / num2);
	d++;
}