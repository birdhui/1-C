// 08_02
// 8�� �Լ� ���ڵ� ����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int check_alpha(char alpha);

int main()
{
	char alpha;

	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf("%c", &alpha);

	check_alpha(alpha);

	return 0;
}

int check_alpha(char alpha)
{
	for (int i = 97; i <= 122; i++) {
		if (alpha == i) {
			printf("%c�� ���ĺ� �����Դϴ�.\n", alpha);
		}
	}

	return 0;
}