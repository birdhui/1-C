#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void convert(double* grades, double* scores, int size);

int main()
{
	double grades[10] = { 0.0, 0.5, 1.0, 1.5, 2.0, 2.5, 3.0, 3.5, 4.0, 4.3 };
	double scores[10];

	convert(grades, scores, 10);
	return 0;
}

void convert(double* grades, double* scores, int size)
{
	int i;

	printf("grades[10] = { ");
	for (i = 0; i < size; i++) {
		printf("%.2lf ", grades[i]);
	}
	printf("}\n");

	printf("scores[10] = { ");
	for (i = 0; i < size; i++) {
		scores[i] = 100 * grades[i] / 4.3;
		printf("%2.2lf ", scores[i]);
	}
	printf("}\n");
}