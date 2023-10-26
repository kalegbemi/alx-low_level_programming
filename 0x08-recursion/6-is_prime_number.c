#include "main.h"
#include <stdio.h>
int _prime(int n, int x);

/**
 * is_prime_number - function to a number is a prime number
 * @n: the integer whose prime status is to be determined
 * Return: Always 0 (success)
 */

int is_prime_number(int n)
{
	return (_prime(n, n / 2));
}

/**
 * _prime - supporting function in finding a prime number
 * @n: the integer whose prime nature is to be determined
 * @x: the variable to iteraate n with which will be n/2
 * Return: the function
 */


	int _prime(int n, int x)
	{

	if (n <= 1)
	{
		return (0);
	}

	if (x == 1)
	{
		return (1);
	}

	if ((n % x) == 0)
	{
		return (0);
	}
	return (_prime(n, x - 1));

	}
