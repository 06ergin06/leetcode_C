#include <limits.h>
int	ft_isdigit(int c)
{
	if ('0' <= c && c <= '9')
	{
		return (1);
	}
	return (0);
}

int	myAtoi(char *str)
{
	int		i;
	int		sign;
	long	res;

	i = 0;
	sign = 1;
	res = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		res = (res * 10) + (str[i] - '0');
		if(sign == 1 && res > INT_MAX)
			return (INT_MAX);
		if(sign == -1 && res > -(long)INT_MIN)
			return (INT_MIN);
		i++;
	}
	return ((int)(res * sign));
}