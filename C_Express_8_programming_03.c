// C_Express_8_programming_03
// ���޵� ���ڰ� ���ĺ� �������� �ƴ����� �˻��ϴ� �Լ� check_alpha()�� �ۼ��ϰ�
// �̰��� ȣ���� ����ڰ� �Է��� ���ڰ� ���ĺ� (a���� z����)������ �Ǵ��Ͽ� ����ϴ� ���α׷� �ۼ�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

check_alpha(char text);

int main()
{
	char alpha;

	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf("%c", &alpha);

	check_alpha(alpha);

	return 0;
}

check_alpha(char text)
{
	if (text >= 97 && text <= 122) {
		printf("%c�� ���ĺ� �����Դϴ�.\n", text);
	}
	else
	printf("%c�� �� �� ���� �����Դϴ�.\n", text);
}