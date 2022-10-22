// 7장_반복문, 프로그래밍 문제_09
// (1+2+3+...+n)가 10000을 넘지 않으면서 가장 큰 값과 그 때의 n을 구하기

#include <stdio.h>

//while문 사용해서 문제 풀기
/**
int main()
{
	int i = 0, result = 0;

	while (1)
	{
		result += i;
		if (result > 10000)
			break;
		i++;
	}
	printf("1부터 %d까지의 합이 %d입니다.\n", i - 1, result - i);

	return 0;
}
*/


// for문 사용해서 문제가 안풀림 ㅠ 이유가 뭘까

int main()
{
	int i, result = 0;

	for (i = 1; i < 1000; i++) {
		result += i;
		if (result > 10000) {
			break;
		}
	}
	printf("1부터 %d까지의 합이 %d입니다.\n", i - 1, result - i);
	// i - 1, result - i 를 하는 이유 : 
	return 0;
}