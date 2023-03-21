#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: name to be printed
 * @f: pointer to function
*/

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		f(name);
	}
	else
	{
		return;
	}
}
