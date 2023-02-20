#include <stdio.h>
#include <ctype.h>

/**
 * main - Prints alphabet in lowercase
 *
 * prints it using putchar and for loop
 *
 * Return: 0
*/

int main(void)
{
	int array_var[26];
	int x;

	for (int x = 'A'; x <= 'Z' ; x++)
	{
		int lower_x = tolower(x);

		putchar(lower_x);
	}
return (0);
}
