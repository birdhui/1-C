// 7��_�ݺ���, ���α׷��� ����_03
// ����ڰ� �Է��� ������ ��� ����� ����ϴ� ���α׷� �ۼ��ϱ�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, num;

	printf("����� ���ϰ��� �ϴ� ������ ���� �Է��Ͻÿ� : ");
	scanf("%d", &num);

	for (i = 1; i <= num; i++) {
		if (num % i == 0)
			printf("%d ", i);
	}
	printf("\n");

	return 0;
}