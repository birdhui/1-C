// C_Express_9_programming_07
// ��ȯ ȣ���� �̿��� ������ �� �ڸ����� ����ϴ� �Լ� show_digit(int x)�� �ۼ��ϰ� �׽�Ʈ�϶�
// ���� �ڸ��� ����ϰ� ������ �κ��� ������� �ٽ� ���� �Լ��� ��ȯ ȣ���Ѵ�..
// ���� ��� 1234�� 4�� ����ϰ� ������ 123�� ������ �ٽ� ���� �Լ��� ��ȯ ȣ���Ѵ�.
// 1234�� 10���� ������ 123�� �ǰ� 4�� 1234�� 10���� ���� �������̴�
// ���� x�� 10���� ���� ���� ������ show_digit(x/10);�� ���� �ٽ� ��ȯȣ���ϸ� �ȴ�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int show_digit(int x);

int main()
{
	int x; // ���� ����

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &x);

	show_digit(x);

	return 0;
}

int show_digit(int x)
{
	if (x < 10) {
		return printf("%d ", x);
	}
	else
		show_digit(x / 10);
	return printf("%d ", x % 10);
}