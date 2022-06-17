#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 02
/*
int main()
{
	int num1, num2;

	printf("정수를 입력하시오: ");
	scanf("%d", &num1);
	printf("정수를 입력하시오: ");
	scanf("%d", &num2);

	if (num1 % num2 == 0) {
		printf("약수입니다.\n");
	}
	else
		printf("약수가 아닙니다.\n");

	return 0;
}
// */

// 03
/*
int main()
{
	int x, y, z, min;

	printf("3개의 정수를 입력하시오: ");
	scanf("%d %d %d", &x, &y, &z);

	if (x < y) {
		if (x < z) {
			min = x;
		}
		else {
			min = z;
		}
	if (y < z) {
		min = y;
	}
	}
	else
		min = z;

	printf("제일 작은 정수는 %d입니다.\n", min);

	return 0;
}
// */

// 04

// 05
/*
int main()
{
	int height, age;

	printf("키를 입력하시오(cm): ");
	scanf("%d", &height);
	printf("나이를 입력하시오: ");
	scanf("%d", &age);

	if (height >= 140 && age >= 11)
	{
		printf("타도 좋습니다.\n");
	}
	else
		printf("죄송합니다.\n");

	return 0;
}
// */

// 06
/*
int main()
{
	int month;

	printf("월번호를 입력하시오: ");
	scanf("%d", &month);
	
	switch (month)
	{
		case 1:
		printf("1월\n");
			break;

		case 2:
			printf("2월\n");
			break;

		case 3:
			printf("3월\n");
			break;

		case 4:
			printf("4월\n");
			break;

		case 5:
			printf("5월\n");
			break;

		case 6:
			printf("6월\n");
			break;

		case 7:
			printf("7월\n");
			break;

		case 8:
			printf("8월\n");
			break;

		case 9:
			printf("9월\n");
			break;

		case 10:
			printf("10월\n");
			break;

		case 11:
			printf("11월\n");
			break;

		default: 12;
			printf("12월\n");
			break;
	}

	return 0;
}
// */

//07
/*
int main()
{
	double weight, height, result;

	printf("체중과 키를 입력하세요(키,체중): ");
	scanf("%lf %lf", &height, &weight);

	result = (height - 100) * 0.9;

	if (weight > result) {
		printf("과체중입니다.\n");
	}
	else if (weight == result) {
		printf("표준입니다.\n");
	}
	else
		printf("저체중입니다.\n");

	return 0;
}
// */

//08
/*
int main()
{
	int time, age;

	printf("현재 시간과 나이를 입력하시오(시간, 나이): ");
	scanf("%d %d", &time, &age);

	if (time <= 5 && age < 65 || age >= 13) {
		printf("요금은 34,000원 입니다.\n");
		if (time > 5 && age <= 64 || age >= 13) {
			printf("요금은 10,000원 입니다.\n");
			if (time <= 5 && age >= 65 || age >= 3 || age <= 12) {
				printf("요금은 25,000원 입니다.\n");
			}
		}
	}
	else
		printf("요금은 10,000원 입니다.\n");

	return 0;
}
// */

// 08
/*
int main()
{
	int time, age;

	printf("현재 시간과 나이를 입력하시오(시간, 나이): ");
	scanf("%d %d", &time, &age);

	if (time <= 5) {
		if (age < 65 || age >= 13) {
			printf("요금은 34,000원 입니다.\n");
		}
		if (3 <= age <= 12 || age >= 65) {
			printf("요금은 25,000원 입니다.\n");
		}
		else {
			printf("10,000원입니다.\n");
		}
	}
	else if (time > 5)
		printf("요금은 10,000원 입니다.\n");

	return 0;
}


// 09
/*
int main()
{
	double x, zero, notzero;

	printf("x의 값을 입력하시오: ");
	scanf("%lf", &x);

	zero = (x * x) - (9 * x) + 2;
	notzero = (7 * x) + 2;

	if (x <= 0) {
		printf("f(x)의 값은 %lf\n", zero);
	}
		if (x > 0) {
			printf("f(x)의 값을 %lf\n", notzero);
		}

	return 0;
}
// */

// 10
/*
int main()
{
	int x, y;

	printf("좌표(x,y): ");
	scanf("%d %d", &x, &y);

	if (x > 0 && y > 0) {
		printf("1사분면\n");
	}
	else if (x < 0 && y > 0) {
		printf("2사분면\n");
	}
	else if (x < 0 && y < 0) {
		printf("3사분면\n");
	}
	else if (x > 0 && y < 0) {
		printf("4사분면\n");
	}
	else
	printf("영점");

	return 0;
}
// */

// 11
/*
int main()
{
	char text;
	printf("문자를 입력하시오: ");
	scanf("%c", &text);

	switch (text)
	{
	case('C'):
	case('c'):
		printf("Circle\n");
		break;

	case('R'):
	case('r'):
		printf("Rectangle\n");
		break;

	case('T'):
	default:('t');
		printf("Triangle\n");
		break;
	}

	return 0;
}
// */