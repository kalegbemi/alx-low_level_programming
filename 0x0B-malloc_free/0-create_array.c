#include "main.h"
/**
 * create_array - function to create an array
 * @size: size of array
 * @c: the specific character to save on the array
 * Return:  NULL pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *output;
	unsigned int i;

	output = malloc(sizeof(char) * size);
	if (size == 0)
		return (NULL);
	if (output == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		output[i] = c;
	return (output);
}
