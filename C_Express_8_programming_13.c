// C_Express_8_programming_13
// �� ���� ���� n, m�� �Է¹޾Ƽ� n�� m�� ����̸� 1�� ��ȯ�ϰ�
// �׷��� ������ 0�� ��ȯ�ϴ� �Լ�
// Is_multiple(int n, int m)�� �ۼ��ϰ� �׽�Ʈ�غ���

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

Is_multiple(int n, int m);

int main()
{
	int num1 = 0, num2 = 0;
	printf("ù��° ������ �Է��Ͻÿ�: ");
	scanf("%d", &num1);
	printf("�ι�° ������ �Է��Ͻÿ�: ");
	scanf("%d", &num2);

	if (Is_multiple(num1, num2) == 1) {
		printf("%d�� %d�� ����Դϴ�.\n", num1, num2);
	}
	else if (Is_multiple(num1, num2) == 0)
		printf("%d�� %d�� ����� �ƴմϴ�.\n", num1, num2);

	return 0;
}

Is_multiple(int n, int m)
{
	if (n % m == 0) { // n�� m�� ����� ��
		return 1;
	}
	else			  // n�� m�� ����� �ƴ� ��
		return 0;
}