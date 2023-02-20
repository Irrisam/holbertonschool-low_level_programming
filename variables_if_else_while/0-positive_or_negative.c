#include <stdlib.h>
#include <time.h>

/**
 * main - Checks for positive or negative or zero randint
 *
 * Checking randint with if loops
 * Return: 0
 */
int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
					if (n >= 0)
					{
						if (n > 0)
							printf("is positive\n", n);
						else
						{
							printf("is zero\n");
						}
					}
					else
					{
						printf("is negative\n");
					}
					return (0);
}
