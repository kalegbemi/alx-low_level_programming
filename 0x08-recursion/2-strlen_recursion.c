#include "main.h"
/**
 * _strlen_recursion - return the length of a string
 * @s: string whose length we are returning
 * Return: lent
 */
int _strlen_recursion(char *s)
{
	int lent = 0;

	if (*s)
	{
		lent++;
		lent += _strlen_recursion(s + 1);
	}

	return (lent);

}
