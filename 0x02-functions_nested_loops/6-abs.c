#include "main.h"
/**
 * _abs - function to find the absolute number of a figure
 * @a: function parameter
 * Return: Always a or -a
*/
int _abs(int a)
{
	if (a < 0)
		return (-a);
	else if (a >= 0)
	{
		return (a);
	}
	return (0);
}
