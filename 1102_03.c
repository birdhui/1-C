#define _CRT_SECURE_NO_WARNINIGS
#include <stdio.h>
// 함수에 변수를 값에 의한 호출 형식으로 넘기고 main에서 해당 변수를 출력해보기
// 함수에 매개변수를 주소에 의한 호출 형식으로 넘기고 main에서 해당 변수를 출력해보기
// 콜바인 value?

void mento(int num);

int main()
{
	int an = 12;
	mento(an); // 7

	printf("%d", an);

	return 0;
}

void mento(int num)
{
	num = 7;
}
// int num 대입하면
// num에 12를 대입하게 되서 함수 num = 12
// 그래서 num은 12로 출력