#include "variadic_functions.h"

/**
 *sum_them_all - returns sum of given numbers
 *@n: list of elements in variadic
 *Return: summed numbers
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum = 0;

	i = 0;
	va_start(ap, n);

	for (; i < n; i++)
	{
	sum += va_arg(ap, unsigned int);
	}
	va_end(ap);

	return (sum);
}
