#include "main.h"
/**
 * _isupper - function to locate the upper case in a string
 * @c: parameter for the function
 * Return: 1 and 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
