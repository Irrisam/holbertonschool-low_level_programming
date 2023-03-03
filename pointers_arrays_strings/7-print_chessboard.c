#include "main.h"

/**
 * print_chessboard - prints out an 8x8 size chessboard
 * @a: chars to put pieces
 */

void print_chessboard(char (*a)[8])
{

	int row = 0;
	int colonne = 0;

	for (; row < 8; row++)
	{
		for (; colonne < 8; colonne++)
		{
			printf("%c", a[row][colonne]);
		}
		colonne = 0;
		printf("\n");
	}
}

