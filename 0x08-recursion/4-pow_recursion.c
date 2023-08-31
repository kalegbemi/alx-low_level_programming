#include "main.h"
/**
 * _pow_recursion - function to return the value of x raise to y
 * @x: int variable x
 * @y: int variable y
 * Return: 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));

}
