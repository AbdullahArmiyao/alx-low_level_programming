#include "main.h"

/**
 * alloc_grid - function that returns a pointer to a
 * 2 dimensional array of integers
 *
 * @width: rows
 * @height: columns
 *
 * Return: int
 *
 */

int **alloc_grid(int width, int height)
{
	int i = 0, j = 0;
	int **grid;

	if (height <= 0 || width <= 0)
		return (NULL);

	grid = (int **)malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	while (i < height)
	{
		/* allocate memory for rows */
		grid[i] = (int *)malloc(width * sizeof(int));

		if (grid[i] == NULL)
		{
			while (i >= 0)
			{
				free(grid[i]);
				i--;
			}

			free(grid);
			return (NULL);
		/* handle memory allocation failure and dangling pointer */
		}
		while (j < width)
		{
			grid[i][j] = 0;
			j++;
		}

		i++;
	}
	return (grid);
}
