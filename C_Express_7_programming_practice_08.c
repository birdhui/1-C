// 7��_�ݺ���, ���α׷��� ����_08
// ����ڷκ��� 1���� 50������ ���ڸ� �Է� �޾� �� ����ŭ ���� ����ϴ� ���α׷� �ۼ��ϱ�
// ����� ���η� �׷����� �ȴ�.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num = 0;

	printf("1���� 50������ ������ �Է��Ͻÿ� : ");
	scanf("%d", &num);

	for (int i = 1; i <= num; i++) {
		printf("*");
	}
	if (num == -1) {
		printf("���α׷��� �����մϴ�.");
	}
	printf("\n");

	return 0;
}