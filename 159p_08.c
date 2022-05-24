#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int time, age;

	printf("현재 시간과 나이를 입력하시오(시간, 나이): ");
	scanf("%d %d", &time, &age);

	/*
	if (time < 17) {
		if (age > 12 || age > 65)
			printf("요금은 34,000원 입니다.\n");
	}
	if (time < 17) {
		if (age <= 12 || age <= 65)
			printf("요금은 25,000원 입니다.\n");
	}
		else
			printf("요금은 10,000원 입니다.\n");
	*/

	if (age > 12 || age > 65){
		if (time <= 17)
			printf("요금은 34,000원 입니다.\n");
		else
			printf("요금은 10,000원 입니다.\n");
	}
	// 대인 가격표
	// 나이 : 12세 초과 65세 미만
	// 자유이용권 (오후 5시 이전) : 34,000원
	// 야간이용권 (오후 5시 이후) : 10,000원

	else if (age >=3 && age <=12 || age >= 65) {
		if (time <= 17)
			printf("요금은 25,000원 입니다.\n");
		else
			printf("요금은 10,000원 입니다.\n");
	}

	// 소인 가격표
	// 나이 : 3세 이상 ~ 12세 이하 / 65세 이상
	// 자유이용권 (오후 5시 이전) : 25,000원
	// 야간이용권 (오후 5시 이후) : 10,000원

	return 0;
}