#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	int a = 0;
	int b = 0;

	while (a <= 9)
	{
		while (b <= 9 )
		{
			putchar(a);
			putchar(b);
			putchar(',');
			putchar(' ');
			a++;
			b++;
		}
	}
	putchar('\n');
	return (0);
}
