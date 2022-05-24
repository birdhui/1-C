#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int height, weight, standard;

	printf("체중과 키를 입력하세요: ");
	scanf("%d %d", &height, &weight);

	standard = (height - 100) * 0.9;

	if (weight < standard)
		printf("저체중입니다.\n");
	else if (weight == standard)
		printf("표준입니다.\n");
	else
		printf("과체중입니다.\n");

	return 0;
}