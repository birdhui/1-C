// ���ĺ� �������� �ƴ����� �˻� check_alpha()�� �ۼ��ϰ� ȣ��

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void check_alpha(char ch);

int main()
{
	char ch;

	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf("%c", &ch);

	check_alpha(ch);

	return 0;
}

void check_alpha(char ch)
{
	// 97~122 (���� �ҹ���)
	/*
	for (int i = 97; i <= 122; i++) {
		if (i == ch) {
			printf("%c�� ���ĺ� �����Դϴ�.\n", ch);
		}
	}
	*/

	// if������ Ǯ��
	if (ch >= 97 && ch <= 122) {
		printf("%c�� ���ĺ� �����Դϴ�.\n", ch);
	}
	else
		printf("%c�� ���ĺ� ���ڰ� �ƴմϴ�.\n", ch);

}