// 2���� ������ �հ� ���� ���ÿ� ��ȯ�ϴ� �Լ��� �ۼ��ϴ� ���α׷�
// ������ �Ű� ���� Ȱ��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void get_sum_diff(int x, int y, int* p_sum, int* p_diff);

int main()
{
	int sum = 0, diff = 0;
	get_sum_diff(100, 200, &sum, &diff);
	return 0;
}

/*	
	*p_sum = &sum

	 ���� ��� *p_sum�� &sum sum�� �ּҰ��� ��ұ� ������
	*p_sum���� sum�� ���� ���
  
  -> ��°��� �� ���� *�� �ٿ��� ���Ϸ��� ���� ���� *�� ������ ������ �ּҰ��� ����
*/
void get_sum_diff(int x, int y, int* p_sum, int* p_diff)
{
	*p_sum = x + y;
	*p_diff = x - y;

	printf("���ҵ��� ��: %d\n", p_sum);	// *�� ������ �ʾұ� ������ �ּҰ��� ����
	printf("���ҵ��� ��: %d", *p_diff);	// *�� �ٿ��� ������ ���� ����
}