#include "main.h"
/**
 * _strpbrk - searches for byte that are in accept 
 * and return a pointer to a byte that matches it
 * @s:string searched in
 * @accept: string searched
 * Return: 0
 */

char* _strpbrk(char* s, char* accept) 
{
	while (*s != '\0')
	{
		char* a = accept;
		while (*a != '\0')
		{
			if (*s == *a)
			{
				return s;
			}
			a++;
		}
		s++;
	}
	return 0;
}
