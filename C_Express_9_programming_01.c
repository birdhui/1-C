// C_Express_9_programming_01
// ����, ����, ����, �������� �����ϴ� ���� ���α׷��� �ۼ��غ���
// �� ������� �� ���� ���Ǿ������� ����ϰ� ����
// �� ������ �����ϴ� �Լ����� �ڽ��� ȣ��� Ƚ���� ȭ�鿡 ����Ѵ�.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int num1, num2; // ���� ����
char cal;

void plus(); // �Լ� ����
void minus();
void mul();
void div();

int main()
{
	while (1) { // ���� ��� ���ѹݺ� while��
		printf("������ �Է��Ͻÿ�: ");
		scanf("%d%c%d", &num1, &cal, &num2);

		switch (cal) {
		case '+':
			plus();
			break;

		case '-':
			minus();
			break;

		case '*':
			mul();
			break;

		case '/':
			div();
			break;
		}
	}

	return 0;
}

void plus()
{
	static int a = 1; // ���� ���� ����
	printf("������ �� %d�� ����Ǿ����ϴ�.\n", a);
	printf("���� ���: %d\n", num1 + num2);
	a++;
}

void minus()
{
	static int b = 1;
	printf("������ �� %d�� ����Ǿ����ϴ�.\n", b);
	printf("���� ���: %d\n", num1 - num2);
	b++;
}

void mul()
{
	static int c = 1;
	printf("������ �� %d�� ����Ǿ����ϴ�.\n", c);
	printf("���� ���: %d\n", num1 * num2);
	c++;
}

void div()
{
	static int d = 1;
	printf("�������� �� %d�� ����Ǿ����ϴ�.\n", d);
	printf("���� ���: %d\n", num1 / num2);
	d++;
}