// C_Express_8_programming_12
// �μ��� ����ŭ�� ��ǥ ���ڸ� ����ϴ� �Լ� Print_value(int n)�� �ۼ��϶�
// �ݺ������� ����ڷκ��� ���� �Է¹޾Ƽ� print_value()�� ȣ���Ͽ�
// �Է� ����ŭ ���븦 �׸��� ���α׷��� �ϼ��϶�
// ����ڰ� ������ �Է��ϸ� �ݺ��� �ߴ��϶�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_value(int n) {
	for (int i = 0; i < n; i++) {
		printf("*");
	}
	printf("\n");
}

int main()
{
	int n;
	
	printf("���� �Է��Ͻÿ�(����� ����): ");
	scanf("%d", &n);

	if (n < 0) {
		printf("�����մϴ�.");
	}

	print_value(n);

	return 0;
}