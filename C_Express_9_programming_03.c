// C_Express_9_programming_03
// 로그인시에 아이디를 검사하는 함수 int check()를 작성해 테스트해라
// check()가 한번 호출될 때마다 비밀번호를 질문하고 일치 여부를 0과 1로 반환한다.
// 함수 안에 정적 변수를 선언해 사용해보자

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define KEY 1234

int check();

int main()
{
	for (int i = 1; i < 4; i++) {
		if (check() == 1); // 로그인 성공 시 break
		break;
	}
	return 0;
}

int check()
{
	static attempt = 1;
	int key;

	while (1) {
		printf("비밀번호: ");
		scanf("%d", &key);
		attempt++;

		if (attempt == 4) {
			printf("로그인 시도횟수 초과\n");
			break;
		}
		else if (key == 1234) {
			printf("로그인 성공\n");
			break;
			return 1;
		}
	}
}