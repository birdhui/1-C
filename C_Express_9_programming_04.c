// C_Express_9_programming_04
// 정적 변수는 초기화를 딱 한번만 수행하는 경우에도 사용된다.
// 난수를 생성해 반환하는 함수 get_random()을 작성해 테스트하라
// get_random()이 처음으로 호출되는 경우에는 srand()를 호출해
// 난수의 시드를 초기화하고 그렇지 않으면 단순히 rand()를 호출해 난수를 반환한다.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int get_random(); // 함수 선언

int main()
{
	get_random(); // 초기화 실행
	get_random();
	get_random();
	get_random();

	return 0;
}

int get_random() // 함수 정의
{
	static int inited = 0;
	if (inited == 0) {
		srand(time(NULL)); // rand()함수에 무작위의 시드값을 주기 위한 함수 : 랜덤 난수 생성
		printf("초기화 실행\n");
		inited = 1;
	}
	else
		printf("%d\n", rand());
}