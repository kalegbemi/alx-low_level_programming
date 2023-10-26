#include "main.h"
#include <stdio.h>
int _sqrt(int n, int x);

/**
 * _sqrt_recursion - function to get the squareroot of a number
 * @n: the integer whose squaroot we are to find
 * Return: Always 0 (success)
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 0));
}



/**
 * _sqrt - supporting function in finding the root of a number
 * @n: the integer whose squaroot we are to find
 * @x: the variable to iterate with
 * Return: the function
 */


	int _sqrt(int n, int x)
	{

	if (n < 0)
	{
		return (-1);
	}

	if ((x * x) > n)
	{
		return (-1);
	}

	if ((x * x) == n)
	{
		return (x);
	}
	return (_sqrt(n, x + 1));

	}
