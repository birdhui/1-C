// 08_04
// 8�� �Լ� ���ڵ� ����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_leap(int year);

int main()
{
	int year;

	printf("������ �Է��ϼ���: ");
	scanf("%d", &year);

	is_leap(year);

	return 0;
}

int is_leap(int year)
{
	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)) {
		printf("%d��� 366���Դϴ�.\n", year);
	}
	else
		printf("%d��� 365���Դϴ�.\n", year);

	return 0;
}