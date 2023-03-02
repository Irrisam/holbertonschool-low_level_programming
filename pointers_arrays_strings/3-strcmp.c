#include "main.h"

/**
*_strcmp - compares strings and returns difference
* @s1: input comparing to
* @s2 : input compared to
* Return: difference beetween values and 0 if similar
*/

int _strcmp(char *s1, char *s2)
{
	int compteur = 0;

	while (s1[compteur] && s2[compteur] == s1[compteur])
	{
		compteur++;
	}
return (s1[compteur] - s2[compteur]);
}
