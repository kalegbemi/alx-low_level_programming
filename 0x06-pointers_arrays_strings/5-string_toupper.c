#include "main.h"
/**
 * string_toupper - change lowercase to uppercase
 * @l: pointer variable
 * Return: l
 */
char *string_toupper(char *l)
{
	int i;

	for (i = 0; l[i] != '\0'; i++)
	{
		if (l[i] >= 'a' && l[i] <= 'z')
			l[i] = l[i] - 32;
	}
	return (l);
}
