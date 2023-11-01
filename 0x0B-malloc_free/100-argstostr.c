#include "main.h"
/**
 * argstostr - a function to concatenate arguments of an array
 * @ac: the number of elements in the array - array size
 * @av: the array of type argument
 *
 * Return: NULL (failure) 0 (success)
 */
char *argstostr(int ac, char **av)
{
	int argstrlen = 0;
	char *s;
	int i, j, l = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			argstrlen++;
	}
	argstrlen += ac;

	s = malloc(sizeof(char) * (argstrlen + 1));

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			s[l] = av[i][j];
			l++;
		}
		if (s[l] == '\0')
			s[l++] = '\n';
	}
	return (s);
}
