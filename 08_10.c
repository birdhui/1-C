// 08_10
// while�� �����ؼ� �ٽ� Ǯ��

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
		printf("�ո� �Ǵ� �޸�(1 �Ǵ� 0): ");
		scanf("%d", &com);

		while (1) {
			if (b_rand() == com)
				printf("�¾ҽ��ϴ�.\n");
			else
				printf("Ʋ�Ƚ��ϴ�.\n");

			printf("����Ͻðڽ��ϱ�?: ");
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