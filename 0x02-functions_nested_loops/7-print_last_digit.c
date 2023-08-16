#include "main.h"
/**
 * print_last_digit - to print the last digit of a number
 * @a: function parameter
 * Return: Always 0
 */

int print_last_digit(int a)
{
	int b = a % 10;

	if (a < 0)
		b = -b;

	_putchar(b + '0');
	return (b);
}

