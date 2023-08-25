#include "main.h"
/**
 * reverse_array - reverses the array of a string
 * @a: the array
 * @n: the integer to reverse from
 */
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = n - 1; i >= n / 2; i--)
	{
		j = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = j;
	}
}
