// C_Express_8_programming_07
// ���޿� �ٴ� �ҵ漼�� ����ϴ� �Լ� get_tax(int income)�� �ۼ��ϰ� �׽�Ʈ�غ���
// ��ǥ ������ 1000���� ���� 8%, 1000���� �ʰ��� 10%�� �Ǿ� �ִٰ� �����Ѵ�.
// ����ڷκ��� �ҵ��� �Է¹޾� ������ ����ϴ� ���α׷��� �ۼ��϶�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

get_tax(int income); // �Լ� ����

int main()
{
	int tax;

	printf("�ҵ��� �Է��ϼ���(����): ");
	scanf("%d", &tax);

	printf("�ҵ漼�� %d�Դϴ�.\n", get_tax(tax)); // �Լ� ȣ��

	return 0;
}

get_tax(int income) // �Լ� ����
{
	if (income <= 1000)
		return income * 0.08;

	else if (income > 1000)
		return income * 0.1;
}