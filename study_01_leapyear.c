#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// ���ǹ� ���� ���ϱ�
/*
	���� => 4�⸶��, �׷����� 100�� ������ ���� ���⿡ �ش����� �ʵ���
	���� => 400�� ������ ���� � ��Ȳ�̵簣�� �������� �����Ѵ�.
*/

int main()
{
	int year;
	printf("�⵵�� �Է����ּ��� : ");
	scanf("%d", &year);

	if ((year % 4 == 0 && year != 0) || (year % 400 == 0)) {
		printf("%d�� �����Դϴ�.\n", year);
	}
	else
		printf("%d�� ������ �ƴմϴ�.\n", year);

	return 0;
}