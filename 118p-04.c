#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int krw;
	double num1, usd;

	printf("환율을 입력하시오: ");
	scanf("%lf", &num1);

	/*정수형인 num1과 krw를 나눠서 실수형으로 표기를 할 때에는
	  형변환을 해주어야 함 !!
	  
	  그렇기에 num1과 krw 둘 중 하나를 실수형으로 만들어서
	  결과값도 실수로 정상적으로 나올 수 있게 해야함
	  
	  현재 문제에서는 krw를 정수로 표기해야하기 때문에
	  환율인 num1을 실수형으로 변환해 주었음
	  
	  사실 krw를 실수로 표기하고 %.0lf <- 이렇게 값을 짜도 됌*/
	

	printf("원화 금액을 입력하시오: ");
	scanf("%d", &krw);

	usd = krw / num1;

	printf("원화 %d원은 %lf달러입니다.\n", krw, usd);

	return 0;
}