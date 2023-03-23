#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - print strings
 * @separator: split strings
 * @n: strings to look through
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *result = 0;
	va_list ap;

	va_start(ap, n);

	for (; i < n; i++)
	{
		result = va_arg(ap, char*);
		if (result == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", result);
		}
		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}

