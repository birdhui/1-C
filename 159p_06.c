#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num1 = 0;

	printf("월번호를 입력하시오: ");
	scanf("%d", &num1);

	switch (num1)
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

	default:
		printf("12월\n");
		break;
	}

	return 0;
}