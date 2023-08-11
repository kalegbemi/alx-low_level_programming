#include <stdio.h>
/**
 * main - entry point
 *
 * return: always 0 (success)
 */
int main(void)
{
	int i;
	char c;
	long int l;
	long long int e;
	float f;

	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(l));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(e));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
