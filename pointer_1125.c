// 2���� ������ �հ� ���� ���ÿ� ��ȯ�ϴ� �Լ� �ۼ�
// ������ �Ű� ���� ���

#include <stdio.h>
void get_sum_diff(int x, int y, int* p_sum, int* p_diff);

int main()
{
	int sum = 0, diff = 0;		// ���� ���� �ʱ�ȭ

	get_sum_diff(100, 200, sum, &diff);

	printf("���ҵ��� ��=%d\n���ҵ��� ��=%d\n", &sum, &diff);
	// ������ ������ &ió�� �ּҿ� ��������� ��

	return 0;
}

void get_sum_diff(int x, int y, int* p_sum, int* p_diff)
{
	*p_sum = x + y;
	*p_diff = x - y;
}