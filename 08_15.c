// 08_15

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_prime(int n);

int main()
{
	int i;

	for (i = 2; i <= 100; i++) {
		if (is_prime(i) == 0) {
			printf("%d ", i);
		}
	}
	printf("\n");

	return 0;
}

int is_prime(int n)
{
	for (int a = 2; a < n; a++) {
		if (n % a == 0) {	// 家荐老 锭
			return 1;
		}
	}
	return 0;				// 家荐老 锭
}