// ũ�Ⱑ 10�� 1���� �迭�� ������ ����
// �ִ񰪰� �ּڰ� ���

#include <stdio.h>
#include <limits.h>		// �ڷ����� �ִ񰪰� �ּڰ��� ���ǵ� ��� ����
#include <stdlib.h>
#include <time.h>

int main()
{
	int i, min, max = 0;
	int num[10] = { 0 };
	srand(time(NULL));

	for (i = 0; i < 10; i++) {
		num[i] = rand();
		if (max < num[i]) {
			max = num[i];
		}    
		min = INT_MAX;
		if (min > num[i]) {
			min = num[i];
		}
	}
	printf("�ִ밪�� %d\n", max);
	printf("�ּҰ��� %d\n", min);

	return 0;
}