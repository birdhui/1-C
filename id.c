// �α��� �Լ� ������ ����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void login();

int main()
{
	login();

	return 0;
}

void login()
{
	char id = 0, idd[5] = { "sehui" };
	int pw = 0;

	while (1) {
		printf("�ȳ��ϼ��� ��ȭ ���� Ȩ�������Դϴ�.\n");
		printf("���̵� �Է����ּ���: ");
		scanf("%s", &id);

		for (int i = 0; i < 5; i++) {
			if (idd[i] == id) {
				printf("��й�ȣ�� �Է����ּ���: ");
				scanf("%d", &pw);

				if (pw == 1234) {
					printf("�α��� ����!\n");
					break;
				}
			}

			else if (id != 0 && pw != 0) {
				printf("Ʋ�Ƚ��ϴ�. ���̵�� ��й�ȣ�� �ٽ� �Է����ּ���.\n");
				printf("\n");
			}
		}
	}
}