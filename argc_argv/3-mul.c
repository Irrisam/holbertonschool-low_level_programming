#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiply args
 * @argc: number of args
 * @argv: arrayf os args
 * Return: 0
*/
int main(int argc, char **argv)
{
	int resultat = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		resultat = (atoi(argv[1])) * (atoi(argv[2]));
		printf("%d\n", resultat);
	}
	return (0);
}
