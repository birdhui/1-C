// C_Express_8_programming_01
// 주어진 실수를 제곱하여 반환해 함수 double square(double)를 작성한다.
// square() 함수를 테스트하는 프로그램 작성

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
double square(double num); // 함수 선언

int main()
{
	double i;

	// 제곱할 실수 입력
	printf("정수를 입력하시오: ");
	scanf("%lf", &i);

	// 제곱한 실수 값 출력
	printf("정수 %lf의 제곱은 %lf입니다.\n", i, square(i)); // square(i) = i * i
															// 함수에 i값이 대입되어 계산된다.
	
	return 0;
}

double square(double num)
{
	return num * num;
}