#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap values of given ints
 * @a: first int
 * @b: second int
*/

void swap_int(int *a, int *b)
{
	int temp = 0;

	temp = *a;
	*a = *b;
	*b = temp;
}
