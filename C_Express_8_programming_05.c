// C_Express_8_programming_05
// 실수를 정수로 변환하면 소수점 이하는 잘려서 없어진다.
// 예를 들어, 6.999를 정수로 변환하면 6이 된다.
// 실수에 0.5를 더하여 소수점 이하를 버리는 반올림 연산을 수행하는 함수 round(double f)를 작성하고 테스트하라
// 단, f는 양수라고 가정하라

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int round(double f);

int main()
{
	double num;

	printf("실수를 입력하시오: ");
	scanf("%lf", &num);

	printf("반올림한 값은 %d입니다.\n", round(num));

	return 0;
}

int round(double f)
{
	return f + 0.5;
}

// 왜 안되는지 확인해보고 코드 수정해보기
// 함수가 오작동된다. 왜 안되지?