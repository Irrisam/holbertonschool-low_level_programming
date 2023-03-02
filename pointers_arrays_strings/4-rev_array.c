#include "main.h"

/**
 *  * rev_string - reverses a string and stocks it in the same value
 *   * @s: string to be reversed
 *    */

void reverse_array(int *a, int n)
{
	int compteur = 0;
	int temp = 0;
	
	n = n-1;
	while (compteur < n)
	{
		temp = a[compteur];
		a[compteur] = a[n];
		a[n] = temp;
		n--;
		compteur++;
	}
}
