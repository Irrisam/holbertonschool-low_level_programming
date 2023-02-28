#include "main.h"
#include "_putchar.c"

/**
 * rev_string - reverses a string and stocks it in the same value
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int a = 0;
	int compteur = 0;
	char arr = ' ';

	while (s[a] != '\0')
	{
		a++;
	}
	a = a - 1;
	while (compteur < a)
	{
		arr = s[compteur];
		s[compteur] = s[a];
		s[a] = arr;
		a--;
		compteur++;
	}
}

