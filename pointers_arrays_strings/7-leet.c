#include "main.h"
#include "_putchar.c"

/**
 *  * main - check the code for
 *   *
 *    * Return: Always 0.
 *     */
char *leet(char *str)
{
	int compteur1 = 0;
	int compteur2 = 0;
	char transformed[100];
	int compteurprint = 0;

	while(str[compteur1] != '\0')
	{
		transformed[compteur2] = str[compteur1];

		if(str[compteur1] == 'a' || str[compteur1] == 'A')
		{
			transformed[compteur2] = '4';
		}
		else if (str[compteur1] == 'e' || str[compteur1] == 'E')
		{
			transformed[compteur2] = '3';
		}
		else if (str[compteur1] == 'o' || str[compteur1] == 'O')
		{
			transformed[compteur2] = '0';
		}
		else if (str[compteur1] == 't' || str[compteur1] == 'T')
		{
			transformed[compteur2] = '7';
		}
		else if (str[compteur1] == 'l' || str[compteur1] == 'L')
		{
			transformed[compteur2] = '1';
		}
		compteur1++;
		compteur2++;
	}
	transformed[compteur2] = '\0';
	while (compteurprint <= compteur2)
	{
		_putchar(transformed[compteurprint]);
			compteurprint++;
	}
	return(0);	
}
