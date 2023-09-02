#include <stdio.h>
/**
 * main - a program to print the name of an argument
 * @argc: argument count
 * @argv: the argument name
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	printf("%s\n", argv[0]);
	return (0);
}
