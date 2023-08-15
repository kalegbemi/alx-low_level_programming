#include "main.h"

/**
 * _islower - Checks for lowercase alphabet
 * Description: to check if c is lower case
 * Return: if character is lowercase 0 , otherwise 1
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (0);
	else
		return (1);
}

