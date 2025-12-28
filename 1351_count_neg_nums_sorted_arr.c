int countNegatives(int** grid, int gridSize, int* gridColSize) {
	int	i;
	int	j;
	int	res;

	i = 0;
	res = 0;
	while (i < gridSize)
	{
		j = 0;
		while (j < gridColSize[i])
		{
			if(grid[i][j] < 0)
			{
				res += gridColSize[i] - j;
				break;
			}
			j++;
		}
		i++;
	}
	return res;
}
