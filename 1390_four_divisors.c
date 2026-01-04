int	compare(const void *a, const void *b)
{
	return (*(int *)a - *(int *)b);
}
int	four_divisor_sum(int x)
{
	int	r;
	int	s;
	int	i;

	r = 0;
	s = 0;
	i = 1;
	while (i <= sqrt(x) && r <= 4)
	{
		if (x % i == 0)
		{
			if ((x / i) != i)
			{
				r += 2;
				s += i + (x / i);
			}
			else
			{
				r++;
				s += i;
			}
		}
		i++;
	}
	return (r == 4 ? s : 0);
}
int	sumFourDivisors(int *nums, int numsSize)
{
	int	res;
	int	sum;

	res = 0;
	qsort(nums, numsSize, sizeof(int), compare);
	for (int i = 0; i < numsSize; i++)
	{
		sum = four_divisor_sum(nums[i]);
		res += sum;
		while (i + 1 < numsSize && nums[i + 1] == nums[i])
		{
			res += sum;
			i++;
		}
	}
	return (res);
}
