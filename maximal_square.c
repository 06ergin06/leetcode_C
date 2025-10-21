int	min(int num1, int num2, int num3)
{
	int	m;

	m = num1;
	if (num2 < m)
		m = num2;
	if (num3 < m)
		m = num3;
	return (m);
}
int	map_solve_helper(int **n, int x, int y)
{
	if (n[x][y] == 0)
		return (0);
	return (min(n[x][y - 1], n[x - 1][y], n[x - 1][y - 1]) + 1);
}

void	map_solver(int **nums, int matrixSize, int *matrixColSize)
{
	int	i;
	int	j;

	i = 1;
	while (i < matrixSize)
	{
		j = 1;
		while (j < matrixColSize[i])
		{
			nums[i][j] = map_solve_helper(nums, i, j);
			j++;
		}
		i++;
	}
}
int	maximalSquare(char **matrix, int matrixSize, int *matrixColSize)
{
	int	i;
	int	j;
	int	**nums;
	int	max;

	nums = malloc(sizeof(int *) * matrixSize);
	i = 0;
	while (i < matrixSize)
	{
		nums[i] = malloc(sizeof(int) * matrixColSize[i]);
		j = 0;
		while (j < matrixColSize[i])
		{
			if (matrix[i][j] == '0')
				nums[i][j] = 0;
			else
				nums[i][j] = 1;
			j++;
		}
		i++;
	}
	map_solver(nums, matrixSize, matrixColSize);
	max = 0;
	for (int i = 0; i < matrixSize; i++)
	{
		for (int j = 0; j < matrixColSize[i]; j++)
		{
			if (nums[i][j] > max)
			{
				max = nums[i][j];
			}
		}
	}
    return max * max;
}
