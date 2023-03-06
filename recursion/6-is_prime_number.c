#include "main.h"

/**
 * primenumb - checks for prime number
 * @n: value to be checked
 * @y: value to be decremented to check from
 * Return: 0 if prime and 1 if not
 */

int primenumb(int n, int y)
{
	if (y == 1)
	{
		return (1);
	}
	else if (n % y == 0)
	{
		return (0);
	}
	return (primenumb(n, y - 1));
}

/**
 *  * is_prime_number - checks for prime number
 *   * @n: value to be checked
 *     * Return: 0 if prime and 1 if not
*/

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	else
	{
		return (primenumb(n, n - 1));
	}
}
