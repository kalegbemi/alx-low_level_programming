#include <stdio.h>
/**
 *main - Entry point
 *Description: 'numbers from 0 -9 using putchar'
 *Return: Always 0 (success)
 */
int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
