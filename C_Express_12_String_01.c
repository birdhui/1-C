// 사용자로부터 입력받은 문자를 아스키 코드값으로 출력하는 프로그램
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>	//  문자 처리 라이브러리
void character(char* str);

int main()
{
	char string = 0;

	printf("문자를 입력하시오: ");
	// 아스키코드값으로 바꿔주는 함수
	character(&string);

	// 아스키 코드값을 출력하기 위해서는 %d 정수형으로 받아야 한다.
	printf("아스키 코드값=%d", toascii(string));

	return 0;
}

void character(char* str)
{
	scanf("%c", str);
}