#include "main.h"
/**
 * cap_string - change strings to cap
 * @l: the string to work on
 * Return: l
 */
char *cap_string(char *l)
{
	int i = 0;

	while (l[i])
	{
		while (!(l[i] >= 'a' && l[i] <= 'z'))
			i++;
		if (l[i - 1] == ' ' ||
			l[i - 1] == '\t' ||
			l[i - 1] == '\n' ||
			l[i - 1] == ',' ||
			l[i - 1] == ';' ||
			l[i - 1] == '.' ||
			l[i - 1] == '!' ||
			l[i - 1] == '?' ||
			l[i - 1] == '"' ||
			l[i - 1] == '(' ||
			l[i - 1] == ')' ||
			l[i - 1] == '{' ||
			l[i - 1] == '}' ||
			i == 0)
			l[i] -= 32;
		i++;
	}
	return (l);
}
