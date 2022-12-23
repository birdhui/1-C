// �迭 ����_���� ���� �ý���_Renewal
// 1201~1202
// 1 �α��� : ID/PW �޾Ƽ� ������ �α��� ���� / Ʋ���� ID�� �ٽ� �ޱ� (3������)
// 2 ȸ������ : ȸ���� �ƴϸ� ID/PW ���� ����� / Ʋ���� ID�� �ٽ� �ޱ� (3������)
// 3 ���� : ������ ���� ���ڸ� ������ ����ǰ� �����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define NUM 3

typedef struct login {
	char id[10];
	int passwd;
}LOGIN;					// �迭 ���� ����

void login(LOGIN* id0[]);					// �α��� �Լ� ����
void theater_print(int seats[][10]);			// �¼� ��� �Լ� ����
void theater_reservation(int seats[][10]);		// �¼� ���� �Լ� ����
int seats[10][10] = { 0 };

int main()
{
	LOGIN y_id[4] = { "sehui", 1234, 0 };
	char ans;

	while (1) {
		printf("�ȳ��ϼ��� ��ȭ ���� �ý����Դϴ�.\n");
		printf("ȸ���̽ʴϱ�? (��:y �ƴϿ�:n ��ȸ��:e): ");
		scanf("%c", &ans);

		if (ans == 'y') {
			login(y_id);
		}

		else if (ans == 'e') {
			printf("�α��� �ý����� �����մϴ�.\n");
			printf("��ȸ������ ��ȯ�˴ϴ�.\n");
		}
		break;
	}
	theater_print(seats);
	theater_reservation(seats);

	return 0;
}

// �α��� �Լ�
void login(LOGIN* id0)
{
	int i, count = 0, pw;
	char idd[10] = 0;

		for (i = 0; i < 10; i++) {
			printf("���̵� �Է����ּ���: ");
			scanf("%s", idd[i]);
			printf("��й�ȣ�� �Է����ּ���: ");
			scanf("%d", &pw);


			if (id0[i].id == idd[i] && id0[i].passwd == pw) {
				printf("�α����� �Ϸ�Ǿ����ϴ�.\n");
				break;
			}

			else {
				printf("Ʋ�Ƚ��ϴ�. ���̵�� ��й�ȣ�� �ٽ� �Է����ֽñ� �ٶ��ϴ�.\n");
				for (i = 0; i < 10; i++) {
					printf("���̵� �Է����ּ���: ");
					scanf("%s", idd[i]);
					printf("��й�ȣ�� �Է����ּ���: ");
					scanf("%d", &pw);
					count++;
					if (count == 3) {
						printf("�α��� �õ� Ƚ���� �ʰ��߽��ϴ�.\n");
						printf("��ȸ������ ��ȯ�˴ϴ�.\n");
						break;
					}
				}
			}
		}
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