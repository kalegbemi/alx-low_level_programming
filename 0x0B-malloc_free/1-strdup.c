#include "main.h"
/**
 * _strdup - a function to return a pointer to the copy of a string parameter
 * @str: The string parameter passed into the function
 * Return: a pointer to the copied string
 */

char *_strdup(char *str)
{
	int j, n = 0;
	char *output;

	if (str == NULL)
		return (NULL);

	while (str[n])
	{
		n++;
	}

	output = malloc(sizeof(*str) * (n + 1));

	if (output == NULL)
		return (NULL);

	for (j = 0; j <= n; j++)
	{
		output[j] = str[j];
	}
	output[n] = '\0';
	return (output);
}

