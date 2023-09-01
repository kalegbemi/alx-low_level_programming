#include "main.h"
/**
 * _isdigit - identify the digits in an array of numbers
 * @c: parameter of the function above
 * Return: 1 or 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
