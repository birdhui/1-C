#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// for���� ����ؼ�
// 1���� 1000������ ���� ����ϱ�

/**
int main()
{
	int result = 0;

	for (int i = 0; i < 1000; i++) {
		result += i;
	}
	printf("1���� 1000������ ���� %d�Դϴ�.\n", result);

	return 0;
}
*/

// while���� ����ؼ� ����ϱ�
int main()
{
	int result = 0 , i = 1;

	while (i <= 1000)
	{
		result += i;	// result = 0�϶� result + i => i = 1�̹Ƿ� result = 1
		i++;			// i++ ������Ų ��
	}					// �ٽ� i = 2 => result + i => i = 2�̹Ƿ� result = 3�̹Ƿ�
						// ���������ڸ� �ڿ� ��ġ

	printf("1���� 1000������ ���� %d�Դϴ�.\n", i);

	return 0;
}