#include "main.h"
/**
 * _strncat - function that concatenates 2 strings unto n given integer
 * @dest: string one
 * @src: string 2
 * @n: n integer to be added fron string 2
 * Return: dest
 */


char *_strncat(char *dest, char *src, int n)
{
	int destl = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		destl++;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[destl + i] = src[i];
	dest[destl + i] = '\0';
	return (dest);
}
