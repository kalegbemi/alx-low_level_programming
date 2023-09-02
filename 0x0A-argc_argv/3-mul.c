#include <stdio.h>
#include <stdlib.h>
/**
 * main - program to multiply two numbers
 * @argc: argument count
 * @argv: argument entered
 * Return: 0 (success), 1 (error)
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		result = num1 * num2;
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
