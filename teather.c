// �迭 ����_���� ���� �ý���
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 10
#include <stdio.h>

int main()
{
	char ans1; // Y or N �Է�
	int ans2, i, seats[SIZE] = { 0 };

	while (1)
	{
		printf("�ȳ��ϼ��� ��ȭ ���Ÿ� �����ִ� �ý����Դϴ�.\n");
		printf("�¼��� �����Ͻðڽ��ϴ�? (y �Ǵ� n �Է��Ͻÿ�): ");
		scanf(" %c", &ans1);
		// ������ �ִ� ���� : printf���� �Է��� �ϰ� '����'�� ĥ �� '����'�� ���ڷ� ���

		// �Է°��� 'y'�̸�
		if (ans1 == 'y')
		{
			printf("------------------------------------\n");
			printf(" 1 2 3 4 5 6 7 8 9 10 \n");
			printf("------------------------------------\n");

			// ���� �¼� ���� ���� ���
			for (i = 0; i < SIZE; i++)
				printf(" %d", seats[i]);
			printf("\n");

			printf("�� ��° �¼��� �����Ͻðڽ��ϱ�? (���� �Է�) : ");
			scanf("%d", &ans2);

			// ������� �ʾ����� ������ ������
			if (ans2 <= 0 || ans2 > SIZE)
			{
				printf("1���� 10������ ���ڸ� �Է��ϼ���.\n");
				continue;
			}

			// �ε��� �ʱⰪ�� 0�̱� ������ 0���� Ȯ�� �� ������ ������
			if (seats[ans2 - 1] == 0)
			{
				seats[ans2 - 1] = 1;
				printf("������ �Ϸ�Ǿ����ϴ�.\n");
			}

			// �̹� ����Ǿ�����
			else
				printf("�̹� ����� �ڸ��Դϴ�.\n");
		}
		else if (ans1 == 'n')
			printf("���� �ý����� ����Ǿ����ϴ�.\n");
		return 0;
	}
	return 0;
}