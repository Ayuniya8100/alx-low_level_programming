#include "main.h"
/**
 * free_grid - to dealocate the grid
 * @grid: first parameter
 * @height: second parameter
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
