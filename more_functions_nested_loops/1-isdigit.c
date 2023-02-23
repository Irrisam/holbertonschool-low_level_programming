#include "main.h"
/**
 * _isdigit - checks is input is a digit beetween 0 through 9
 * @c: input to be checked
 * Return: 0
 *
*/
int _isdigit(int c)
{
	if (c > 47 && c < 58)

	{
		return (1);
	}
	else
	{
		return (0);
	}
}
