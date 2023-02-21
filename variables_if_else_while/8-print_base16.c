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
	int chiffrelettre = 97;

	for (; chiffre < 58; chiffre++)
		{
		putchar(chiffre);
		}
	for (; chiffrelettre < 103; chiffrelettre++)
		{
		putchar(chiffrelettre);
		}
putchar(newline);
return (0);
}
