#include "main.h"
/**
 * _memcpy - function to copy from one string to another
 * @dest: string to copy to
 * @src: string to copy from
 * @n: the number of size to copy
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
