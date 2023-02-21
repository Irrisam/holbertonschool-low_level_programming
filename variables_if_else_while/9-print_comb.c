#include <stdio.h>

/**
* main - Prints 0-9
* printsb base 10 numbers
* Return:(0)
*/

int main(void)
{
	int chiffre = 48;
	int newline = 10;
	int comma = 44;
	int whitespace = 32;

	for (; chiffre < 58; chiffre++)
		{
		putchar(chiffre);
		if (chiffre == 57)
		{
			break;
		}
		else
		{
			putchar(comma);
			putchar(whitespace);
		}
		}
putchar(newline);
return (0);
}
