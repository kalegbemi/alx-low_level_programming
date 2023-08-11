#include <stdio.h>
/**
 * main - entry point
 *
 * return: always 0 (success)
 */
int main(void)

	int i;
	double d;
	char c;
{
	printf("the size of an int is : %lu.\n", (unsigned long)sizeof(i));
	printf("the size of a double is : %lu.\n", (unsigned long)sizeof(d));
	printf("the size of a char is : %lu. \n", (unsigned long)sizeof(c));
	return (0);
}
