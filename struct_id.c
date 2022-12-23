#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct login {
	char id[20];
	int pwd;
}LOGIN;

int login(LOGIN *c, int count, char* id, int* pw);
void theater_print(int seats[][10]);			// �¼� ��� �Լ� ����
void theater_reservation(int seats[][10]);		// �¼� ���� �Լ� ����
int seats[10][10] = { 0 };						// �迭 ���� ����

int main()
{
	LOGIN y_id[4] = { "sehui", 1234, 0 };

	char ans, id[20];
	int i = 0, pw, cnt = 3;

	while (1) {
		printf("�ȳ��ϼ��� ��ȭ ���� �ý����Դϴ�.\n");
		printf("ȸ���̽ʴϱ�? (��:y �ƴϿ�:n ��ȸ��:e): ");
		scanf("%c", &ans);

		if (ans == 'y') {
			printf("���̵� �Է����ּ���: ");
			scanf("%s", id);
			printf("��й�ȣ�� �Է����ּ���: ");
			scanf("%d", &pw);

			i = login(y_id, 4, id, pw);
			if (0 <= i)
				printf("�α��� ����");

			else if (ans == 'e') {
				printf("�α��� �ý����� �����մϴ�.\n");
				printf("��ȸ������ ��ȯ�˴ϴ�.\n");
			}
		}
		theater_print(seats);
		theater_reservation(seats);

		return 0;
	}
}

int login(LOGIN *c, int count, char *id, int *pw)
{
	for (int i = 0; i < count; ++i) {
		if ((strcmp(c[i].id, id) == 0) && (strcmp(c[i].pwd, pw) == 1234))
			return i;
	}
	return -1;
}

// �¼� ��� �Լ�
void theater_print(int seats[][10])
{
	int i, j;
	printf("------------------------------------------\n");
	printf("   1   2   3   4   5   6   7   8   9   10 \n");
	printf("   11  12  13  14  15  16  17  18  19  20 \n");
	printf("   21  22  23  24  25  26  27  28  29  30 \n");
	printf("   31  32  33  34  35  36  37  38  39  40 \n");
	printf("   41  42  43  44  45  46  47  48  49  50 \n");
	printf("   51  52  53  54  55  56  57  58  59  60 \n");
	printf("   61  62  63  64  65  66  67  68  69  70 \n");
	printf("   71  72  73  74  75  76  77  78  79  80 \n");
	printf("   81  82  83  84  85  86  87  88  89  90 \n");
	printf("   91  92  93  94  95  96  97  98  99  100 \n");
	printf("------------------------------------------\n");

	// ���� �¼� ���� ���� ���
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			printf("   %d", seats[i][j]);
		}
		printf("\n");
	}
}

// �¼� ���� �Լ�
void theater_reservation(int seats[][10])
{
	int i, ans2, ans3;
	char ans;

	// �Է°��� 'y'�̸�
	while (1) {
		printf("�ȳ��ϼ��� ��ȭ ���Ÿ� �����ִ� �ý����Դϴ�.\n");
		printf("�¼��� �����Ͻðڽ��ϱ�? (y �Ǵ� n): ");
		scanf(" %c", &ans);

		if (ans == 'y') {													// ���� �ο��� �Է�
			printf("���� �ο����� �Է����ּ���: ");
			scanf("%d", &ans2);

			for (i = 0; i < ans2; i++) {									// �ο��� ��ŭ �¼� ���� �޼��� ���
				printf("�� ��° �¼��� �����Ͻðڽ��ϱ�? : ");
				scanf("%d", &ans3);

				if (ans3 <= 0 || ans3 > 100) {								// �Էµ� �¼��� ���� �¼� ���� �Ѵ��� �ƴ��� �˻�
					i--;
					continue;
				}
				// 1 ~ 100 �¼� = �迭[0 ~ 9][0 ~ 9]
				if (seats[ans3 / 10][ans3 % 10 - 1] == 0) {					// ������ �¼��� 2���� �迭�� ���� 0�̶��,
					seats[ans3 / 10][ans3 % 10 - 1] = 1;					// �´� ��ġ�� �迭�� 1�� ����
					printf("������ �Ϸ�Ǿ����ϴ�.\n");
				}
				else if (seats[ans3 / 10][ans3 % 10 - 1])					// ���� �¼��� �迭 ���� 1�̶�� = �̹� ����� �ڸ�
					printf("�̹� ����� �ڸ��Դϴ�.\n");
			}
		}
		else if (ans == 'n') {												// 'n'�̸� ���α׷� ����
			printf("��ȭ ���� �ý����� �����մϴ�.\n");
			break;
		}
		theater_print(seats);												// �¼� ���� ��� �Լ� ȣ��
	}
}