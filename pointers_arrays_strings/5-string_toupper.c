#include "main.h"

/**
 *
 */

char *string_toupper(char *str)
{
	int compteur = 0;

	while (str[compteur] != '\0')
	{
		compteur++;

		if (str[compteur] >= 97 && str[compteur] <= 122)
		{
		str[compteur] = str[compteur] - 32 ;
		}
	}
return (str);
}
