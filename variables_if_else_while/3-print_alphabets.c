#include <stdio.h>
#include <ctype.h>

/**
 *  * main - Prints alphabet in lowercase
 *   *
 *    * prints it using putchar and for loop
 *     *
 *      * Return: 0
 */
int main(void)
{
	int A = 'A';
	int Z = 'Z';
	int a = 'a';
	int z = 'z';

	while (a <= z)
		{
		putchar(a);
		a++;
		}
	while (A <= Z)
		{
		putchar(A);
		A++;
		}
putchar('\n');
return (0);
}
