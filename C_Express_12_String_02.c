// ����ڷκ��� �Է¹��� ���ڿ��� ���Ե� ������ ��� �����ϴ� �Լ��� �ۼ��ϴ� ���α׷�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
void string_chr(char* str);

int main()
{
	char str[100];
	printf("���� ���ڰ� �ִ� ���ڿ��� �Է��Ͻÿ�: ");
	// �� ���� ���ڿ��� �о ���� �迭�� ����
	// gets_s()�� ǥ�� �Է����κ��� �ٹٲ� ���ڰ� ���� ������ �� ���� ������ ���ڿ��� �Է¹޴´�.
	// -> �� ���� �Է��� �޾Ƽ� �ٹٲ� ���ڸ� NULL�� ��ȯ�Ͽ� �迭�� ����
	gets_s(str, 100);

	string_chr(str);

	return 0;
}

void string_chr(char* str)
{
	
	int i = 0;
	
	while (str[i] != NULL) {
		if (str[i] != ' ') {
			printf("%c", str[i]);
		}
		i++;
	}
}