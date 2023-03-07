#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *  *main - add all the arguments together if num
 *   *@argc: number of arguments
 *    *@argv: number of char in the argument
 *     *Return: 0 or 1 if error
 *      **/

int main(int argc, char *argv[])
{
	int i, n, result = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (n = 0; argv[i][n]; n++)
		{
			if (!isdigit(argv[i][n]))
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
