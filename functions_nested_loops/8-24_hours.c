#include "main.h"

/**
 * jack_bauer - print jacky boi's day
*/
void jack_bauer(void)
{
	int hours = 0;

	while (hours <= 23)
	{
		int minutes = (0);

		while (minutes < 60)
		{
			_putchar(hours / 10 + '0');
			_putchar(hours % 10 + '0');
			_putchar(58);
			_putchar(minutes / 10 + '0');
			_putchar((minutes % 10) + '0');
			_putchar(10);
		minutes++;
		}
		hours++;
	}
}
