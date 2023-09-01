#include "main.h"

/**
 * _isalpha - Checks for  alphabet
 * Description: "to check if c is lower case"
 * Return:  1 if alphabet , otherwise 0
 */

int _isalpha(int c)
{
	if	((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
