// 7��_�ݺ���, ���α׷��� ����_09
// (1+2+3+...+n)�� 10000�� ���� �����鼭 ���� ū ���� �� ���� n�� ���ϱ�

#include <stdio.h>

//while�� ����ؼ� ���� Ǯ��
/**
int main()
{
	int i = 0, result = 0;

	while (1)
	{
		result += i;
		if (result > 10000)
			break;
		i++;
	}
	printf("1���� %d������ ���� %d�Դϴ�.\n", i - 1, result - i);

	return 0;
}
*/


// for�� ����ؼ� ������ ��Ǯ�� �� ������ ����

int main()
{
	int i, result = 0;

	for (i = 1; i < 1000; i++) {
		result += i;
		if (result > 10000) {
			break;
		}
	}
	printf("1���� %d������ ���� %d�Դϴ�.\n", i - 1, result - i);
	// i - 1, result - i �� �ϴ� ���� : 
	return 0;
}