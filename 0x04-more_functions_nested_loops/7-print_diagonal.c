#include "main.h"
/**
 * print_diagonal - to print a diagonal line
 * @n: number of times to print the diagonal line
 * Return: 0
 */

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int a;
		int b;

		for (a = 1; a <= n; a++)
		{
			for (b = 1; b <= a; b++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
