#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double weight_on_moon, weight_on_earth;

	printf("몸무게를 입력하세요(단위: kg): ");
	scanf("%lf", &weight_on_earth);

	/* scanf 앤퍼센트 연산자 잊지말고 잘 써주기 */

	weight_on_moon = weight_on_earth * 0.17;

	printf("달에서의 몸무게는 %lfkg입니다. \n", weight_on_moon);
	/*결과값 출력할 때 식만 제대로 세우고 끝내지 말고
	  꼭 변수값도 뒤에 써주기!! */

	return 0;
}