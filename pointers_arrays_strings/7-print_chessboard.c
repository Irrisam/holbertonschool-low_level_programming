#include "main.h"

/**
 *
 */

void print_chessboard(char (*a)[8])
{

	int row = 0;
	int colonne = 0;

	for (; row < 8; row++)
	{
		for (; colonne < 8; colonne++)
		{
			printf("%c ", a[row][colonne]);
		}
		_putchar(10);
	}
}

