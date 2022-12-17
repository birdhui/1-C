// 음식에 대하여 음식의 이름, 칼로리 정보를 구조체로 표현
// 사용자가 하루 동안 먹은 음식들을 입력받아 구조체 배열에 저장 후
// 음식의 칼로리를 계산하는 프로그램 작성

#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>
#include <stdlib.h>

typedef struct food {
	char name[20];
	int calories;
}FOOD;

FOOD food_array[] = {
	{ "피자", 1200 },
	{ "밥", 300 },
	{ "떡볶이", 600 }
};

int main()
{
	int sum = 0;
	FOOD mill;
	mill = food_array[0];

	for (int i = 0; i < 3; i++) {
		mill = food_array[i];
		printf("오늘 먹은 음식들: %s\n", mill.name);
	}

	// 오류가 왜 나는지 모르겠음 ㅠㅠ
	// 구조체 배열을 전역으로 돌리니까 됨

	for (int i = 0; i < 3; i++) {
		sum += food_array[i].calories;
	}

	printf("총 칼로리: %d\n", sum);

	return 0;
}