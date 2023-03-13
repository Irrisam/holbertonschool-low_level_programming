#include <stdlib.h>

/**
 *   *alloc_grid - fx that allocade space for a grid of given width and height
 *     *@width: given width as the name is explainatory enough
 *       *@height:  given height as the name is explainatory enough
 *         *Return: 0
 */

int **alloc_grid(int width, int height)
{
	int i, j, k;
	int **p;

	if (width == 0 || height == 0)
		return (NULL);

	p = malloc(height * sizeof(int *));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(width * sizeof(int));
		if (p[i] == NULL)
		{
			while (i >= 0)
			{
				free(p[i]);
				i--;
			}
			free(p);
			return (NULL);
		}
	}

	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
		{
			p[j][k] = 0;
		}
	}
	return (p);
}
