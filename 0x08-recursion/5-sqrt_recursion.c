#include <main.h>
#include <stdio.h>
/**
 * _puts_recursion - function to print a string
 * @n: the integer whose squaroot we are to find
 * Return: Always 0 (success)
 */
int int _sqrt_recursion(int n)
{
	int x = 1;
	if (n / (-1) == (n))
	{
	    return (-1);
	}

	while((x * x) < n)
	{
	    x++;
	}

	if (x * x == n && (n % x) == 0)
	{
		return x;
	}
	 else
	      return (-1);

}
