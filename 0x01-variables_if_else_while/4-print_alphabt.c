#include <stdio.h>
/**
 *main - Entry point
 *Description: 'lowercase without e and q'
 *Return: Always 0 (success)
 */
int main(void)
{
	int a;

	for (a = 0; a <= 25; a++)
	{
		if (a == 4 || a == 16)
		{
			a++;
			continue;
		}
		putchar(a + 97);
	}
	putchar('\n');
	return (0);
}
