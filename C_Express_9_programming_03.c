// C_Express_9_programming_03
// �α��νÿ� ���̵� �˻��ϴ� �Լ� int check()�� �ۼ��� �׽�Ʈ�ض�
// check()�� �ѹ� ȣ��� ������ ��й�ȣ�� �����ϰ� ��ġ ���θ� 0�� 1�� ��ȯ�Ѵ�.
// �Լ� �ȿ� ���� ������ ������ ����غ���

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define KEY 1234

int check();

int main()
{
	for (int i = 1; i < 4; i++) {
		if (check() == 1); // �α��� ���� �� break
		break;
	}
	return 0;
}

int check()
{
	static attempt = 1;
	int key;

	while (1) {
		printf("��й�ȣ: ");
		scanf("%d", &key);
		attempt++;

		if (attempt == 4) {
			printf("�α��� �õ�Ƚ�� �ʰ�\n");
			break;
		}
		else if (key == 1234) {
			printf("�α��� ����\n");
			break;
			return 1;
		}
	}
}