#include "main.h"

/**
 *
 */

int _strcmp(char *s1, char *s2)
{
	int compteur = 0;

	while(s1[compteur] && s2[compteur] == s1[compteur])
	{
		compteur++;
	}
		return(s1[compteur] - s2[compteur]);
}
