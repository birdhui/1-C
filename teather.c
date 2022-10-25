// 배열 선언_극장 예약 시스템
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 10
#include <stdio.h>

int main()
{
	char ans1; // Y or N 입력
	int ans2, i, seats[SIZE] = { 0 };

	while (1)
	{
		printf("안녕하세요 영화 예매를 도와주는 시스템입니다.\n");
		printf("좌석을 예약하시겠습니다? (y 또는 n 입력하시오): ");
		scanf(" %c", &ans1);
		// 공백을 주는 이유 : printf에서 입력을 하고 '엔터'를 칠 때 '엔터'도 문자로 취급

		// 입력값이 'y'이면
		if (ans1 == 'y')
		{
			printf("------------------------------------\n");
			printf(" 1 2 3 4 5 6 7 8 9 10 \n");
			printf("------------------------------------\n");

			// 현재 좌석 예약 상태 출력
			for (i = 0; i < SIZE; i++)
				printf(" %d", seats[i]);
			printf("\n");

			printf("몇 번째 좌석을 예약하시겠습니까? (숫자 입력) : ");
			scanf("%d", &ans2);

			// 예약되지 않았으면 예약을 도와줌
			if (ans2 <= 0 || ans2 > SIZE)
			{
				printf("1부터 10사이의 숫자를 입력하세요.\n");
				continue;
			}

			// 인덱스 초기값이 0이기 때문에 0인지 확인 후 예약을 도와줌
			if (seats[ans2 - 1] == 0)
			{
				seats[ans2 - 1] = 1;
				printf("예약이 완료되었습니다.\n");
			}

			// 이미 예약되었으면
			else
				printf("이미 예약된 자리입니다.\n");
		}
		else if (ans1 == 'n')
			printf("예약 시스템이 종료되었습니다.\n");
		return 0;
	}
	return 0;
}