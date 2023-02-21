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
	int a = 'a';
	int z = 'z';

	while (z >= a)
		{
		putchar(z);
		z--;
		}
putchar('\n');
return (0);
}
