// 7��_�ݺ���, ���α׷��� ����_05
// ��ø �ݺ����� ���, �������� �Է¹޾� ������ ���� ����ϴ� ���α׷� �ۼ��ϱ�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;

	printf("����ϰ��� �ϴ� �������� �Է��Ͻÿ� : ");
	scanf("%d", &num);

	for (int i = 1; i <= num; i++) {
		for (int j = 1; j <= i + 1; j++) {
			printf("%d ", j);
		}
		printf("\n");
	}

	return 0;
}