// C_Express_8_programming_18
// ����ڷκ��� 2���� ���ڸ� �޾Ƽ� ����, ����, ����, ������, ������ ������ ����� ������ִ� ���α׷��� �ۼ��غ���
// �޴��� ȭ�鿡 ǥ���ϰ�, ���α׷� �ۼ��ÿ� �ִ��� �Լ��� ���� ����� ����
// �޴�ǥ��, �޴�����, �����Է�, ������, ���α׷� �ٽý���

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void menu();
int select_one(int n, int m);
int select_two(int n, int m);
int select_three(int n, int m);
int select_four(int n, int m);
int select_five(int n, int m);

int main()
{
	int choose = 0, x, y;
	char yes;

	menu();
	printf("���ϴ� �޴��� �����Ͻÿ�(1-5): ");
	scanf("%d", &choose);
	
	printf("���� 2���� �Է��Ͻÿ�: ");
	scanf("%d %d", &x, &y);

	if (choose == 1)
		printf("������: %d\n", select_one(x, y));
	else if (choose == 2)
		printf("������: %d\n", select_two(x, y));
	else if (choose == 3)
		printf("������: %d\n", select_three(x, y));
	else if (choose == 4)
		printf("������: %d\n", select_four(x, y));
	else if (choose == 5)
			printf("������: %d\n", select_five(x, y));

	printf("����Ϸ��� y�� �����ÿ�: "); // �۵��� �ȵ� ���� ã�ƾߵ�
	scanf("%c", &yes);

	while (yes == 'y'){
		continue;
		if (yes = !'y') {
			break;
		}
	}

	return 0;
}

void menu()
{
	printf("===============================\n");
	printf("              MENU             \n");
	printf("===============================\n");
	printf("1. ����\n2. ����\n3. ����\n4. ������\n5. ������\n");
}

int select_one(int n, int m)
{
	return n + m; // ����
}

int select_two(int n, int m)
{
	return n - m; // ����
}

int select_three(int n, int m)
{
	return n * m; // ����
}

int select_four(int n, int m)
{
	return n / m; // ��
}

int select_five(int n, int m)
{
	return n % m; // ������
}