// C_Express_10_programming_01
// �迭 days[]�� �Ʒ��� ���� �ʱ�ȭ �ϰ� �迭 ������ ���� ������ ���� ����ϴ� ���α׷��� �ۼ��϶�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int days[] = { 31,29,31,30,31,30,31,31,30,31,30,31 };

	for (int i = 0; i < 12; i++) { // �ε���(�迭 ��ȣ)�� �׻� 0���� ����
		printf("%d���� %d�ϱ��� �ֽ��ϴ�.\n", i + 1, days[i]); // �ε��� ��ȣ�� ���߸� 0�����ʹϱ� i+1�� ���ش�.
	}

	return 0;
}