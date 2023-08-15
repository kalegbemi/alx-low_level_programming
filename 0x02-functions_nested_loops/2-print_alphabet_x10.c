#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * Description: print alphabet
 */
void print_alphabet_x10(void)
{
	char ltr;
	int i;

	for (i = 1; i <= 10; i++)
	{
	for (ltr = 'a'; ltr <= 'z'; ltr++)
	{
		_putchar(ltr);
	}
	_putchar('\n');
	}
}
