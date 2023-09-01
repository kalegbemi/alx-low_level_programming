#include "main.h"

/**
 * _islower - Checks for lowercase alphabet
 * Description: to check if c is lower case
 * Return: if character is lowercase 1 , otherwise 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

