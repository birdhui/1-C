#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 01
/*
int main()
{
	int num1, num2;

	printf("2개의 정수를 입력하시오: ");
	scanf("%d %d", &num1, &num2);

	printf("몫: %d 나머지: %d\n", num1 / num2, num1 % num2);

	return 0;
}
// */

//02
/*
int main()
{
	double num1, num2;

	printf("실수를 입력하시오: ");
	scanf("%lf %lf", &num1, &num2);

	printf("%lf %lf %lf %lf", num1 + num2, num1 - num2, num1 * num2, num1 / num2);

	return 0;
}
// */

// 03
/*
int main()
{
	int x, y, z, result;

	printf("3개의 정수를 입력하시오: ");
	scanf("%d %d %d", &x, &y, &z);

	result = (x > y) ? x : y;
	result = (result > z) ? result : z;
	// ?: 조건 연산자 사용할 때
	// () 괄호 꼭 쳐주기

	printf("최댓값: %d\n", result);

	return 0;
}
// */

// 04

// 05
/*
int main()
{
	int num, ten, one;

	printf("정수를 입력하시오: ");
	scanf("%d", &num);

	ten = num / 10;
	one = num % 10;

	printf("십의 자리: %d\n", ten);
	printf("일의 자리: %d\n", one);

	return 0;
}
// */

// 06
/*
int main()
{
	int num, result;

	printf("정수를 입력하시오: ");
	scanf("%d", &num);

	result = ~num + 1;
	
	printf("2의 보수: %d\n", result);

	return 0;
}
// */

// 07
/*
int main()
{
	int num, square, result;

	printf("정수를 입력하시오: ");
	scanf("%d", &num);
	printf("2를 곱하고 싶은 횟수: ");
	scanf("%d", &square);

	result = num << square;

	printf("%d<<%d의 값: %d\n", num, square, result);

	return 0;
}
// */

// 08
/*
int main()
{
	const double PI = 3.14;
	double radius, area, volume;

	printf("구의 반지름을 입력하시오: ");
	scanf("%lf", &radius);

	area = 4 * PI * (radius * radius);
	volume = 4.0 / 3.0 * PI*(radius * radius * radius);

	printf("표면적은 %lf입니다.\n", area);
	printf("체적은 %lf입니다.\n", volume);

	return 0;
}
// */

//09
/*
int main()
{
	double ac, ae, bc, de;

	printf("지팡이의 높이를 입력하시오: ");
	scanf("%lf", &bc);
	printf("지팡이 그림자의 길이를 입력하시오: ");
	scanf("%lf", &ac);
	printf("피라미드까지의 거리를 입력하시오: ");
	scanf("%lf", &ae);

	de = (ae * bc) / ac;

	printf("피라미드의 높이는 %lf입니다.\n", de);

	return 0;
}
// */

// 10
/*
int main()
{
	int x, y;

	printf("x 좌표를 입력하시오: ");
	scanf("%d", &x);
	printf("y 좌표를 입력하시오: ");
	scanf("%d", &y);

	(x > 0 && y > 0) ? printf("1사분면") : printf(" ");
	(x < 0 && y > 0) ? printf("2사분면") : printf(" ");
	(x > 0 && y < 0) ? printf("3사분면") : printf(" ");
	(x < 0 && y < 0) ? printf("4사분면") : printf(" ");

	return 0;
}
// */

// 11
/*
int main()
{
	double mile, gat, result;

	printf("거리를 입력하시오: ");
	scanf("%lf", &mile);
	printf("각도를 입력하시오: ");
	scanf("%lf", &gat);

	result = ((360.0 / gat) * 360.0) / 2.0;

	printf("지구의 반지름은 %lf입니다.\n", result);

	return 0;
}
// */

// 12
/*
int main()
{
	unsigned int a, b, c, d;

	printf("첫번째 문자를 입력하시오: ");
	scanf("%d", &a);
	printf("두번째 문자를 입력하시오: ");
	scanf("%d", &b);
	printf("세번째 문자를 입력하시오: ");
	scanf("%d", &c);
	printf("네번째 문자를 입력하시오: ");
	scanf("%d", &d);

	printf("결과값: %d")

	return 0;
}
// */