#include "main.h"

/**
 *
 */

unsigned int _strspn(char* s, char* accept)
{
	unsigned int compteur = 0;
	char *a;
	
	while (*s != '\0')
	{
		a = accept;

		while (*a != '\0')
		{
			if (*s == *a) 
			{
				compteur++;
				break;
			}
			a++;
		}
		if (*a == '\0')
		{
			return compteur;
		}
		s++;
	}
	return compteur;
}
