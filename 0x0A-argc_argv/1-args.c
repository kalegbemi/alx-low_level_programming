#include <stdio.h>
/**
 * main - a program to print the count of an argument
 * @argc: argument count
 * @argv: the argument name
 * Return: 0 (success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
