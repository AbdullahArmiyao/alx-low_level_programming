#include "main.h"

/**
 * free_grid - function that frees 2d grid previously
 * created by alloc_grid function
 *
 * @grid: 2d grid
 * @height: height
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i = 0;
	/* check if grid is empty */
	if (grid != NULL)
	{
		/* Free memory for each row */
		while (i < height)
		{
			if (grid[i] != NULL)
			{
				free(grid[i]);
			}
			i++;
		}

		/* free memory for the array of pointers to rows */
		free(grid);
	}
}
