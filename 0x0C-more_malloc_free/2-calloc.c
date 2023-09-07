#include "main.h"
/**
 * *_calloc - function to assign memory from 0
 * @nmemb: an array to assign memory to
 * @size: size of the array
 * Return: NULL output
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *output;

	if (nmemb == 0 || size == 0)
		return (NULL);
	output = calloc(nmemb, size);
	if (output == NULL)
		return (NULL);
	else
		return (output);
}
