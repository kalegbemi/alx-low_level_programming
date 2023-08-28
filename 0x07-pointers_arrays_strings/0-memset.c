#include "main.h"
/**
 * _memset - function to fill memory with constant byte
 * @s: the memory string to work with
 * @b: the memory value to be filled on string s
 * @n: the nth byte to be replace with b
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
