// 7��_�ݺ���, ���α׷��� ����_01
// ī������ �ʱⰪ �Է¹޾� ������ ���� 1�� ���ҽ�Ű�鼭 0�� �� ������ �ݺ��ϱ�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, num;
	
	printf("ī������ �ʱⰪ�� �Է��Ͻÿ� : ");
	scanf("%d", &num);

	for (i = num; i >= 0; i--) {
		printf("%d ", i);
	}
	printf("\n");

	return 0;
}