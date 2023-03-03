#include "main.h"
#include <stdio.h>

/**
 *_memcpy - copies memory from src to dest
 *@src: src string to copy
 *@dest: dest string to be copied to 
 * Return: dest pointer to copied file
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int compteur = 0;

 for(; compteur < n; compteur++)
 {
	 *(src + compteur) = *(dest + compteur);
 }
 return (dest);
}
