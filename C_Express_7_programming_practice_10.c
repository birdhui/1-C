// 7��_�ݺ���, ���α׷��� ����_10
// �Ǽ��� �ŵ� ���� ���� ����ϴ� ���α׷� �ۼ�
// ����ڷκ��� �ϳ��� �Ǽ� r�� �ŵ� ���� Ƚ���� ��Ÿ���� ���� n�� �Է¹޾� r^n�� ���ϱ�

#include <stdio.h>

int main()
{
	int n, result = 0;
	double r;

	printf("�ϳ��� �Ǽ��� �ŵ� ���� Ƚ���� �Է��Ͻÿ� : ");
	scanf("%lf %d", &r, &n);

	for (int i = 0; i <= n; i++) {
		result += i * i;
	}
	printf("�ŵ� ���� ���� %d�Դϴ�.\n", result);

	return 0;
}