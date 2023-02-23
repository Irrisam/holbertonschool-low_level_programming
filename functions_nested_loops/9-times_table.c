#include "main.h"

void times_table(void)
{
	int multipliant = 1;
	int result = 0;

	while (multipliant < 10)
	{
		int multiplied = 1;
		_putchar(10);
		_putchar(48);
		_putchar(44);
		_putchar(32);
		
		while (multiplied < 10)
		{
			result = (multipliant * multiplied);
			if (result >= 10)
			{
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
			}	
			_putchar(result + '0');
			
			multiplied++;
		}
		multipliant++;
	}
}
