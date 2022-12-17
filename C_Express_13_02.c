// 은행계좌를 나타내는 구조체를 선언, 구조체 변수를 저장했다 출력하는 프로그램
#include <stdio.h>

struct account {
	int number;
	char name[20];
	int balance;
};

int main()
{
	struct account count = { 1, "홍길동", 100000 };

	printf("{ %d, %s, %d }\n", count.number, count.name, count.balance);

	return 0;
}