#include "main.h"

/**
 * print_array - function to print array
 * @a: first variable declaration
 * @n: seconde variable declaration
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
