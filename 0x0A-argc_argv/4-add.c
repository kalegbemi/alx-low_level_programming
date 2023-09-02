#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * main - program to add 2 numbers
 * @argc: argument command count
 * @argv: the command line vector or arguments
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int a, b;
	int add = 0;

	for (a = 1;  a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (!isdigit(argv[a][b]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add = add + atoi(argv[a]);
	}
	printf("%d\n", add);
	return (0);
}
