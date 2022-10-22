// 배열 선언_난수로 받은 성적으로 평균구하기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define STUDENTS 5
// 배열의 크기가 변경되면 SIZE 정의만 변경

int main()
{
	int i, sum = 0, scores[STUDENTS];
	double average = 0;
	srand(time(NULL));

	for (i = 0; i < STUDENTS; i++)
		scores[i] = rand() % 100;
	// 난수 발생시키는 함수로 점수를 실행할 때마다 변경

	for (i = 0; i < STUDENTS; i++)
		printf("scores[%d]=%d\n", i, scores[i]);

	for (i = 0; i < STUDENTS; i++)
		sum += scores[i]; // sum 값에 점수를 누적시킴
	average = sum / STUDENTS; // 평균 구하기

	printf("성적의 합은 %d이고 성적 평균의 값은 %lf입니다.\n",i, average);

	return 0;
}