// C_Express_9_programming_11
// ���װ���� ����ϴ� ��ȯ �Լ� �ۼ�
// recursive(n-1, k-1) + recursive(n-1,k);�� ���� ������ ����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int recursive(int n, int k);

int main()
{
	int n, k;

	printf("n=");
	scanf("%d", &n);
	printf("k=");
	scanf("%d", &k);

	printf("%d\n", recursive(n, k));

	return 0;
}

int recursive(int n, int k)
{
	if (n == 1 || k == 1) {
		return 1;
	}
	else
		return  recursive(n - 1, k - 1) + recursive(n - 1, k);
}