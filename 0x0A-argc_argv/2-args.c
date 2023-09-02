#include <stdio.h>
/**
 * main - a program to print the the arguments in newline
 * @argc: argument count
 * @argv: the argument name
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
