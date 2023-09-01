#include "main.h"
/**
 * _strlen - to get the number of string
 * @s: the string whose element is to be counted
 * Return: count
 */
int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;
	return (count);
}
