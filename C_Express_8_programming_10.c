// C_Express_8_programming_10
// 앞에서 작성한 b_rand()함수를 이용해 간단한 동전 던지기 게임을 시뮬레이션 해보자
// 컴퓨터가 동전을 던지고 사용자는 앞 뒤를 말한다.
// 컴퓨터는 b_rand()를 이용해 생성된 난수가 1이면 동전의 앞면으로 간주하고
// 0이면 동전의 뒷면으로 간주한다.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int b_rand();

int main()
{
	int com = 0 , user = 0;
	char input;

	srand(time(NULL));

	if (b_rand(com) == 1) {
		printf("앞면 또는 뒷면(1 또는 0): ");
		scanf("%d", &user);

	if (com == user)
		printf("맞았습니다.\n");

	else
		printf("틀렸습니다.\n");


	printf("계속하시겠습니까?(y 또는 n): ");
	scanf("%c", &input);

	if (input == 'y')
		continue;

	else
		break;
	}
	return 0;
}

int b_rand()
{
	return rand() % 2;
}