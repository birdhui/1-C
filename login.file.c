#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
void login_file();

int main()
{
	login_file();
}

void login_file()
{
	char pwd;
	int id = 0;
	FILE* fp;

	fp = fopen("login.txt", "r");

	if (fp != NULL)
		fgets(fp, "%s", id);
	fscanf(fp, "%d", &pwd);

	printf("id = %s\npassword = %d", id, pwd);

	fclose(fp);
}