int	countUnguarded(int m, int n, int **guards, int guardsSize,
		int *guardsColSize, int **walls, int wallsSize, int *wallsColSize)
{
	int	**grid;
	int	i;
	int	j;
	int	x;
	int	y;
	int	res;

	res = m * n;
	grid = (int **)calloc(m, sizeof(int *));
	i = 0;
	while (i < m)
	{
		grid[i] = (int *)calloc(n, sizeof(int));
		i++;
	}
	i = 0;
	while (i < guardsSize)
	{
		grid[guards[i][0]][guards[i][1]] = 1;
		res--;
		i++;
	}
	i = 0;
	while (i < wallsSize)
	{
		grid[walls[i][0]][walls[i][1]] = 2;
		res--;
		i++;
	}
	i = 0;
	x = 0;
	y = 0;
	while (i < m)
	{
		j = 0;
		while (j < n)
		{
			if (grid[i][j] == 1)
			{
				x = i + 1;
				y = j;
				while (x < m && grid[x][y] != 1)
				{
					if (grid[x][y] == 2)
						break ;
					if (grid[x][y] == 0)
					{
						grid[x][y] = 3;
						res--;
					}
					x++;
				}
				x = i - 1;
				y = j;
				while (x >= 0 && grid[x][y] != 1)
				{
					if (grid[x][y] == 2)
						break ;
					if (grid[x][y] == 0)
					{
						grid[x][y] = 3;
						res--;
					}
					x--;
				}
				x = i;
				y = j - 1;
				while (y >= 0 && grid[x][y] != 1)
				{
					if (grid[x][y] == 2)
						break ;
					if (grid[x][y] == 0)
					{
						grid[x][y] = 3;
						res--;
					}
					y--;
				}
				y = j + 1;
				x = i;
				while (y < n && grid[x][y] != 1)
				{
					if (grid[x][y] == 2)
						break ;
					if (grid[x][y] == 0)
					{
						grid[x][y] = 3;
						res--;
					}
					y++;
				}
			}
			j++;
		}
		i++;
	}
	i = 0;
	while (i < m)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
	return (res);
}
