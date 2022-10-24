// C_Express_9_programming_04
// ���� ������ �ʱ�ȭ�� �� �ѹ��� �����ϴ� ��쿡�� ���ȴ�.
// ������ ������ ��ȯ�ϴ� �Լ� get_random()�� �ۼ��� �׽�Ʈ�϶�
// get_random()�� ó������ ȣ��Ǵ� ��쿡�� srand()�� ȣ����
// ������ �õ带 �ʱ�ȭ�ϰ� �׷��� ������ �ܼ��� rand()�� ȣ���� ������ ��ȯ�Ѵ�.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int get_random(); // �Լ� ����

int main()
{
	get_random(); // �ʱ�ȭ ����
	get_random();
	get_random();
	get_random();

	return 0;
}

int get_random() // �Լ� ����
{
	static int inited = 0;
	if (inited == 0) {
		srand(time(NULL)); // rand()�Լ��� �������� �õ尪�� �ֱ� ���� �Լ� : ���� ���� ����
		printf("�ʱ�ȭ ����\n");
		inited = 1;
	}
	else
		printf("%d\n", rand());
}