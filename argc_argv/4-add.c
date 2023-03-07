#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - prints sum of numbers
 * @argc: counts of string
 * @argv: strings
 * Return: 0
 */

int main (int argc, char **argv)
{
	int i = 1;
	int sum = 0;

	for(;i < argc; i++)
	{
		if(isdigit(*argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
