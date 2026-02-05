int	strStr(char *big, char *little)
{
	int	i;
	int	j;

	if (!*little)
		return (0);
	i = 0;
	while (big[i])
	{
		j = 0;
		while (little[j] && big[i + j] && big[i + j] == little[j])
			j++;
		if (!little[j])
			return (i);
		i++;
	}
	return (-1);
}