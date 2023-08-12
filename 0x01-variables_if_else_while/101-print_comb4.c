#include <stdio.h>
/**
 *main - Entry point
 *printing possible combination of 3 numbers that are unique
 *Return: Always 0 (sucess)
 */
int main(void)
{
	int n;
	int m;
	int l;

	for (n = 0; n < 10; n++)
	{
		for (m = n + 1; m < 10; m++)
		{
			for (l = m + 1; l < 10; l++)
			{
				putchar('0' + n);
				putchar('0' + m);
				putchar('0' + l);
				if (n + m + l != 7 + 8 + 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
