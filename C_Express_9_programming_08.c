// C_Express_9_programming_08
// �־��� ������ �� ���� �ڸ������� ������ �ִ����� ����ϴ� ���α׷��� ��ȯ�� �̿��� �ۼ��غ���
// ���� ��� 12345�� ��� 5�� ��µȴ�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int number(int x);

int main()
{
	int x;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &x);

	number(x);

	return 0;
}

int number(int x)
{
	/** if - while������ Ǫ�� ���
	if (x == 0) {
		return 0;
	}
	while (x != 0) {
		return 1 + number(x / 10);
	}
	return 0;
	*/

	// ��ȯȣ�� �̿�
	static int count = 1;

	if (x / 10 > 0) {		// x���� 0�� �� ������ count�� ������Ű��
		count++;
		number(x / 10);
	}
	else
		printf("�ڸ����� ����: %d\n", count);
	return 0;
}