#include <math.h>

int min(int x, int y)
{
	return (x > y ? y : x);
}
int	minPathSum(int **grid, int gridSize, int *gridColSize)
{
	int	top;
	int	left;

	for (int i = 0; i < gridSize; i++)
	{
		for (int j = 0; j < gridColSize[i]; j++)
		{
			if(i == 0 && j == 0)
			{
				continue;
			}
			top = i > 0 ? grid[i - 1][j] : INFINITY;
			left = j > 0 ? grid[i][j - 1] : INFINITY;
			grid[i][j] += min(top,left);
		}
	}
	return (grid[gridSize - 1][gridColSize[0] - 1]);
}
