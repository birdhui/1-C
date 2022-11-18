#define _CRT_SECURE_NO_WARNINIGS
#include <stdio.h>
// 함수에 매개변수를 주소에 의한 호출 형식으로 넘기고 main에서 해당 변수를 출력해보기
// 값에 의한 호출 / 주소에 의한 호출의 차이
// 콜바인 value?

void mento(int* num);

int main()
{
	int num = 10;
	mento(&num);
	// num의 주소

	printf("%d\n", num);

	return 0;
}

void mento(int* num)
{
	int* pnum;
	pnum = &num;
	*pnum = 20;
}