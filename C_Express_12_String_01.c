// ����ڷκ��� �Է¹��� ���ڸ� �ƽ�Ű �ڵ尪���� ����ϴ� ���α׷�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>	//  ���� ó�� ���̺귯��
void character(char* str);

int main()
{
	char string = 0;

	printf("���ڸ� �Է��Ͻÿ�: ");
	// �ƽ�Ű�ڵ尪���� �ٲ��ִ� �Լ�
	character(&string);

	// �ƽ�Ű �ڵ尪�� ����ϱ� ���ؼ��� %d ���������� �޾ƾ� �Ѵ�.
	printf("�ƽ�Ű �ڵ尪=%d", toascii(string));

	return 0;
}

void character(char* str)
{
	scanf("%c", str);
}