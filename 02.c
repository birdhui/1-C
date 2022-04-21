#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int ysalrary, msalrary;

	printf("연봉을 입력하시오(단위: 만원): ");
	scanf("%d", &ysalrary);

	msalrary = ysalrary / 12;

	printf("월수령액(단위: 만원): %d\n", msalrary);

	return 0;
}