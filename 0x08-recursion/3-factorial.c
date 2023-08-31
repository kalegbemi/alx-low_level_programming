#include "main.h"
/**
 * factorial - function to get the factorial of a giving number
 * @n: the number n
 * Return: Always 0 (success)
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));

}
