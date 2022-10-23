// C_Express_8_programming_06
// ������ ����� �ϴ� �Լ����� �ۼ��ϰ�,
// ����ڷκ��� ������ ���� �Է¹��� �Ŀ� �ۼ��� �Լ����� �׽�Ʈ�Ͽ� ����
// a. �־��� ������ ¦���̸� 1�� ��ȯ�ϰ� Ȧ���̸� 0�� ��ȯ�ϴ� �Լ� int even(int n)
// b. �־��� ������ ������ ���ϴ� �Լ� int absoulte(int n)
// c. �־��� ������ �����̸� -1��, ����̸� 1��, 0�̸� 0�� ��ȯ�ϴ� �Լ� int sign(int n)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int even(int n); // ������ ¦�� : 1�� ��ȯ, Ȧ�� : 0�� ��ȯ
int absoulte(int n); // ������ ���ϴ� �Լ�
int sign(int n); // ������ ���� : -1�� ��ȯ, ��� : 1, 0�̸� 0�� ��ȯ

int main()
{
	int num = 0;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &num);

	if (even(num) == 1) {
		printf("even()�� ���: ¦��\n");
	}
	else {
		printf("even()�� ���: Ȧ��\n");
	}

	printf("absoulte()�� ���: %d\n", absoulte(num));

	if (sign(num) == -1) {
		printf("sign()�� ���: ����\n");
	}
	else if (sign(num) == 1) {
		printf("sign()�� ���: ���\n");
	}
	else if (sign(num) == 0) {
		printf("sign()�� ���: 0\n");
	}

	return 0;
}

int even(int n)
{
	if (n % 2 == 0) {
		return 1;
	}
	else
		return 0;
}

int absoulte(int n)
{
	return abs(n);
}

int sign(int n)
{
	if (n < 0) {
		return -1;
	}
	else if(n > 0) {
		return 1;
	}
	else if (n == 0) {
		return 0;
	}
}