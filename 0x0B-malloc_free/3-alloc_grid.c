#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **dream;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	dream = malloc(sizeof(int *) * height);

	if (dream == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		dream[x] = malloc(sizeof(int) * width);

		if (dream[x] == NULL)
		{
			for (; x >= 0; x--)
				free(dream[x]);

			free(dream);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			dream[x][y] = 0;
	}

	return (dream);
}
