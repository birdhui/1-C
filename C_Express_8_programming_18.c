// C_Express_8_programming_18
// 사용자로부터 2개의 숫자를 받아서 덧셈, 뺄셈, 곱셈, 나눗셈, 나머지 연산의 결과를 계산해주는 프로그램을 작성해보자
// 메뉴를 화면에 표시하고, 프로그램 작성시에 최대한 함수를 많이 사용해 보자
// 메뉴표시, 메뉴선택, 숫자입력, 연산결과, 프로그램 다시실행

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void menu();
int select_one(int n, int m);
int select_two(int n, int m);
int select_three(int n, int m);
int select_four(int n, int m);
int select_five(int n, int m);

int main()
{
	int choose = 0, x, y;
	char yes;

	menu();
	printf("원하는 메뉴를 선택하시오(1-5): ");
	scanf("%d", &choose);
	
	printf("숫자 2개를 입력하시오: ");
	scanf("%d %d", &x, &y);

	if (choose == 1)
		printf("연산결과: %d\n", select_one(x, y));
	else if (choose == 2)
		printf("연산결과: %d\n", select_two(x, y));
	else if (choose == 3)
		printf("연산결과: %d\n", select_three(x, y));
	else if (choose == 4)
		printf("연산결과: %d\n", select_four(x, y));
	else if (choose == 5)
			printf("연산결과: %d\n", select_five(x, y));

	printf("계속하려면 y를 누르시오: "); // 작동이 안됨 이유 찾아야됨
	scanf("%c", &yes);

	while (yes == 'y'){
		continue;
		if (yes = !'y') {
			break;
		}
	}

	return 0;
}

void menu()
{
	printf("===============================\n");
	printf("              MENU             \n");
	printf("===============================\n");
	printf("1. 덧셈\n2. 뺄셈\n3. 곱셈\n4. 나눗셈\n5. 나머지\n");
}

int select_one(int n, int m)
{
	return n + m; // 덧셈
}

int select_two(int n, int m)
{
	return n - m; // 뺄셈
}

int select_three(int n, int m)
{
	return n * m; // 곱셈
}

int select_four(int n, int m)
{
	return n / m; // 몫
}

int select_five(int n, int m)
{
	return n % m; // 나머지
}