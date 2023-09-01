#include "main.h"
#include <stddef.h>
/**
 * _strchr - a funtion to locate a character
 * @s: the sring to search from
 * @c: the character to search
 * Return: s, NULL
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
