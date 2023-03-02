#include "main.h"

/**
*  * reverse_array - reverses an array of int and stocks it in the
*  same variable
*   * @a: array to be reversed
*   *@n: given size of array
*/

void reverse_array(int *a, int n)
{
	int compteur = 0;
	int temp = 0;

	n = n - 1;
	while (compteur < n)
	{
		temp = a[compteur];
		a[compteur] = a[n];
		a[n] = temp;
		n--;
		compteur++;
	}
}
