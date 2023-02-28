#include "main.h"

/**
 *
 */

void puts2(char *str)
{
	int a = 0;
	int compteur = 0;

	while (str[a] != '\0')
	{
		a++;
	}
	
	while (compteur <= a)
	{
		_putchar(str[compteur]);
		
		compteur+=2;
	}
	_putchar(10);
}

