#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// for문을 사용해서
// 1부터 1000까지의 합을 출력하기

/**
int main()
{
	int result = 0;

	for (int i = 0; i < 1000; i++) {
		result += i;
	}
	printf("1부터 1000까지의 합은 %d입니다.\n", result);

	return 0;
}
*/

// while문을 사용해서 출력하기
int main()
{
	int result = 0 , i = 1;

	while (i <= 1000)
	{
		result += i;	// result = 0일때 result + i => i = 1이므로 result = 1
		i++;			// i++ 증감시킨 후
	}					// 다시 i = 2 => result + i => i = 2이므로 result = 3이므로
						// 증감연산자를 뒤에 배치

	printf("1부터 1000까지의 합은 %d입니다.\n", i);

	return 0;
}