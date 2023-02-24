#include <stdio.h>

/**
 * * print_most_numbers - Prints 0-9
 * * printsb base 10 numbers
 * * Return:(0)
*/

void print_most_numbers(void)
{
	int chiffre = 48;
	int newline = 10;

	{
		for (; chiffre < 58; chiffre++)
		{
			if (chiffre != 50)
				if (chiffre != 52)
				{
					putchar(chiffre);
				}
			}
					putchar(newline);
	}
}
