#include "main.h"
#include <stdio.h>

int _strlen(char *s)
{
	int mabite = 0;
	while (*s != '\0')
	{
		mabite++;
		s++;
	}
	return (mabite);
}
