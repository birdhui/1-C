// C_Express_8_programming_04
// ������ ���ϴ� �˰����� �Լ� is_leap(int year) �� �ۼ��ϰ�
// �� �Լ��� ����� ����ڰ� �Է��� ������ ���������� ����ϴ� ���α׷��� �ۼ��϶�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

is_leap(int year);

int main()
{
	int y;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &y);

	is_leap(y);

	return 0;
}

is_leap(int year)
{
	if (year % 4 == 0 &&  year % 100 != 0 || year % 400 == 0) {
		printf("%d���� 366���Դϴ�.\n", year);
	}
	else
		printf("%d���� 365���Դϴ�.\n", year);
}