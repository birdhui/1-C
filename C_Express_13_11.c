// ����ü �迭�� ������ ��ȭ��ȣ�θ� ����
// 3���� �����͸� ����ڷκ��� �޾� ����
// ����ڷκ��� �̸��� �Է¹ٴ� ��ȭ��ȣ�� �˻��ϴ� ���α׷�

#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>
#include <string.h>
#define SIZE 3

typedef struct phone {
	char name[20];
	char number_home[10];
	char number_my[10];
}PHONE;

int main()
{
	int i;
	char find[20];	// ã�ƾ� �� �̸��� �迭�� �����ؼ� ����ü �迭�� ���ϱ� ���� �迭 ����
	PHONE call[20];

	for (i = 0; i < SIZE; i++) {
		printf("�̸��� �Է��Ͻÿ�: ");
		scanf("%s", &call[i].name);	// ����ü scanf()���� & �ּ� �ٿ��ֱ�
		printf("����ȭ��ȣ�� �Է��Ͻÿ�: ");
		scanf("%s", &call[i].number_home);
		printf("�޴�����ȣ�� �Է��Ͻÿ�: ");
		scanf("%s", &call[i].number_my);
	}

	printf("�˻��� �̸��� �Է��Ͻÿ�: ");
	scanf("%s", &find);

	for (i = 0; i < SIZE; i++) {
		if (strcmp(find, call[i].name) == 0) {
			printf("����ȭ��ȣ: %s\n", call[i].number_home);
			printf("�޴�����ȣ: %s\n", call[i].number_my);
		}
	}

	return 0;
}