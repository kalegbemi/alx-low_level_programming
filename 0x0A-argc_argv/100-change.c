#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program to multiply two numbers
 * @argc: argument count
 * @argv: argument entered
 * Return: 0 (success), 1 (error)
 */

int main (int argc, char *argv[])
{
	 int count = 0;
	 int cent = atoi(argv[1]);

	if (argc > 2)
	{
		printf("error\n");
		return(1);
	}

	if (cent < 0)
	{
		printf("0\n");
	}



	while (cent >= 1)
	{
		int x = 0;
		if (cent >= 25)
		{
			x = cent / 25;
			count += x;
			cent = cent % 25;

		}
		else if (cent < 25 && cent >= 10)
		{
			x = cent / 10;
			count += x;
			cent = cent % 10;

		}
		else if (cent < 10 && cent >= 5)
		{
			x = cent / 5;
            		count += x;
            		cent = cent % 5;

		}
		else if (cent < 5 && cent >= 2)
		{
			x = cent / 2;
            		count += x;
            		cent = cent % 2;

		}
		else
		{
			count += cent;
			cent = cent % 1;

		}


	}

   printf("%d\n", count);
	return (0);
}
