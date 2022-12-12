// 로그인 함수 만들어보기 예제
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void login();

int main()
{
	login();

	return 0;
}

void login()
{
	char id = 0, idd[5] = { "sehui" };
	int pw = 0;

	while (1) {
		printf("안녕하세요 영화 예약 홈페이지입니다.\n");
		printf("아이디를 입력해주세요: ");
		scanf("%s", &id);

		for (int i = 0; i < 5; i++) {
			if (idd[i] == id) {
				printf("비밀번호를 입력해주세요: ");
				scanf("%d", &pw);

				if (pw == 1234) {
					printf("로그인 성공!\n");
					break;
				}
			}

			else if (id != 0 && pw != 0) {
				printf("틀렸습니다. 아이디와 비밀번호를 다시 입력해주세요.\n");
				printf("\n");
			}
		}
	}
}