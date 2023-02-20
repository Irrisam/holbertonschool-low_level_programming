#include <stdio.h>
#include <ctype.h>

/**
 *  *  * main - Prints alphabet in lowercase
 *   *   *
 *    *    * prints it using putchar and for loop
 *     *     *
 *      *      * Return: 0
 */
int main(void)
{
		int a = 'a';
		int z = 'z';

	while (a <= z)
		{
		if (a != 'e')
			putchar(a);
		a++;
		}
putchar('\n');
return (0);
}
