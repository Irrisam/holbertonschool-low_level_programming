#include "variadic_functions.h"
#include <stdio.h>
/**
 *print_number - pritns given numbers
 *@separator: splits values
 *@n: list to search through
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	int result = 0;
	va_list ap;

	va_start(ap, n);
	i = 0;

	for (; i < n; i++)
	{
		result = va_arg(ap, unsigned int);
		printf("%d", result);

		if (i != n - 1 && separator != NULL)
		{
		printf("%s", separator);
		}
	}
	va_end(ap);
}
