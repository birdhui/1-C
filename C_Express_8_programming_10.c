// C_Express_8_programming_10
// �տ��� �ۼ��� b_rand()�Լ��� �̿��� ������ ���� ������ ������ �ùķ��̼� �غ���
// ��ǻ�Ͱ� ������ ������ ����ڴ� �� �ڸ� ���Ѵ�.
// ��ǻ�ʹ� b_rand()�� �̿��� ������ ������ 1�̸� ������ �ո����� �����ϰ�
// 0�̸� ������ �޸����� �����Ѵ�.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int b_rand();

int main()
{
	int com = 0 , user = 0;
	char input;

	srand(time(NULL));

	if (b_rand(com) == 1) {
		printf("�ո� �Ǵ� �޸�(1 �Ǵ� 0): ");
		scanf("%d", &user);

	if (com == user)
		printf("�¾ҽ��ϴ�.\n");

	else
		printf("Ʋ�Ƚ��ϴ�.\n");


	printf("����Ͻðڽ��ϱ�?(y �Ǵ� n): ");
	scanf("%c", &input);

	if (input == 'y')
		continue;

	else
		break;
	}
	return 0;
}

int b_rand()
{
	return rand() % 2;
}