// ������ �Լ��� �̿��� 2�� �̻��� ���� ��ȯ�ϴ� ���α׷�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void get_int(int* px, int* py);

int main()
{
	int x, y, sum = 0;

	printf("2���� ������ �Է��Ͻÿ�(��: 10 20): ");
	get_int(&x, &y);
	/*
		*px, *py;
		px = &x (�ּҰ�)
		py = &y (�ּҰ�)
		
	*/

	sum = x + y;
	printf("������ ���� %d\n", sum);
	
	return 0;
}

void get_int(int* px, int* py)
{
	/*
		px = &x
		py = &y
		
		printf ����̾����� *�� �ٿ��� ���� ���԰�����,
		scanf �ϱ� *�� ������ �ʾƾ� ������ �Ű� ������ ���� �����
	*/

	scanf("%d %d", px, py);
}