#include <stdlib.h>

/**
 *  *free_grid - function that clean a previous created 2D grid
 *   *@grid: is an array of height and width
 *    *@height: height of the grid
 *     *Return: void
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
