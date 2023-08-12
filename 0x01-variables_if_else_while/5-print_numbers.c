#include <stdio.h>
/**
 *main - Entry point
 *Description: 'write out numbers from 0 - 9'
 *Return: Always 0 (success)
 */
int main(void)
{
	int a = 48;

	while (a <= 57)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
