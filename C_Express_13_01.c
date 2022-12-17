// 책을 나타내는 구조체 book을 선언, 값을 가지는 구조체 변수를 생성한 후 화면에 출력하는 프로그램
#include <stdio.h>

struct book {
	int id;
	char title[100];
	char author[20];
};

int main()
{
	struct book b = { 1, "바람과 함께 사라지다", "마가렛 미첼" };

	printf("{ %d, %s, %s }\n", b.id, b.title, b.author);

	return 0;
}