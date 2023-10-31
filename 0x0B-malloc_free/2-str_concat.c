#include "main.h"
/**
 * str_concat - a function to concatenate 2 strings
 * @s1: First string of the parameter
 * @s2: Second string of the parameter
 * Return: A pointer to the cancatenated string (success)
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0, l;
	char *output;
	
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;

	while (s2[j])
		j++;
	k = i + j;
	output = malloc(sizeof(char) * (k + 1));
	if (output == NULL)
		return (NULL);
	j = 0;

	for (l = 0; l <= k; l++)
	{
		if (l < i)
		{
			output[l] = s1[l];
		}
		if (l >= i)
		{
			output[l] = s2[j];
			j++;
		}
	}
	return (output);
}
