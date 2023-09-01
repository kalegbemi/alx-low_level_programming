#include "main.h"
/**
 * _strpbrk - function to search a string for a set of bytes
 * @s: strings to search
 * @accept: strings to be searched
 * Return: '\0'
 */

char *_strpbrk(char *s, char *accept)
{
		int k;

		while (*s)
		{
			for (k = 0; accept[k]; k++)
			{
			if (*s == accept[k])
			return (s);
			}
		s++;
		}

	return ('\0');
}

