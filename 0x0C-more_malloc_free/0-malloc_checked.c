#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - to allocate memory with a pointer to output
 * @b: the variable to safe in memory
 * Return: output
 */
void *malloc_checked(unsigned int b)
{
	char *output;

	output = malloc(b);
	if (output == NULL)
		exit(98);
	else
		return (output);
}
