#include "main.h"

/**
 * cap_string - caps letter in string and ignores special chars
 * @str: given string
 * Return: uppercased string
 */

char *cap_string(char *str)
{
	int compteur = 0;

	while (str[compteur] != '\0')
	{
		compteur++;
			if (str[compteur] >= 97 && str[compteur] <= 122)
			{
				str[compteur] = str[compteur] - 32;
			}
	}
	return (str);
}
