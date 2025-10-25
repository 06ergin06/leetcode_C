int	totalMoney(int n)
{
	int	i;
	int	j;
	int	res;

	i = 0;
	j = 1;
	res = 0;
	while (i < n)
	{
		if (i % 7 == 0)
		{
			j = (i / 7) + 1;
		}
		res += j;
		i++;
		j++;
	}
	return (res);
}
