// 08_10
// while문 공부해서 다시 풀기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int b_rand();

int main()
{
	int com;
	char answer;

	srand(time(NULL));

	while (1) {
		printf("앞면 또는 뒷면(1 또는 0): ");
		scanf("%d", &com);

		while (1) {
			if (b_rand() == com)
				printf("맞았습니다.\n");
			else
				printf("틀렸습니다.\n");

			printf("계속하시겠습니까?: ");
			scanf("%c", &answer);

			if (answer == 'y')
				continue;
			else (answer == 'n')
				break;
		}
	}

	return 0;
}

int b_rand()
{
	return rand() % 2;
}