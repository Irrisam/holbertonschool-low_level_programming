#include "main.h"
#include "_putchar.c"
/**
 *  * print_array - print n number os int in given stray of ints
 *@a: given steray of ints
 *@n: n number of ints printed
 *    * Return: Always 0.
*/

void print_array(int *a, int n)
{
	int compteur;

	for (compteur = 0; compteur < n; compteur++)
	{
		printf("%d",a[compteur]);
		if (compteur != n - 1)
		{
		printf(", ");
		}
		else
		{
		}
	}
	printf("\n");
}
