#include "main.h"
/**
 * print_alphabet - Entry point
 * Description: print alphabet
 */
void print_alphabet(void)
{
	char ltr;

	for (ltr = 'a'; ltr <= 'z'; ltr++)
	{
		_putchar(ltr);
	}
	_putchar('\n');
}
