// 2���� ������ �հ� ���� ���ÿ� ��ȯ�ϴ� �Լ��� �ۼ��ϰ� �׽�Ʈ
// ������ �Ű� ���� ���

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void get_sum_diff(int x, int y, int* p_sum, int* p_diff);

int main()
{
	int x, y, *p_sum, *p_diff;

	printf("2���� ������ �Է��ϼ���: ");
	scanf("%d %d", &p_sum, &p_diff);

	get_sum_diff(x, y, &x, &y);

	printf("���ҵ��� ��=%d\n���ҵ��� ��=%d\n", p_sum, p_diff);

	return 0;
}

void get_sum_diff(int x, int y, int* p_sum, int* p_diff)
{
	*p_sum = x + y;	// ������ ����
	*p_diff = x - y;	// ������ ����
}