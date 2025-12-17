char	**fizzBuzz(int n, int *returnSize)
{
	char	**arr;
	int	num;

	arr = (char **)malloc(n * sizeof(char *));
	*returnSize = n;
	for (int i = 0; i < n; i++)
	{
		num = i + 1;
		if (num >= 15 && num % 15 == 0)
		{
			arr[i] = (char *)malloc(9 * sizeof(char));
			strcpy(arr[i], "FizzBuzz");
		}
		else if (num >= 3 && num % 3 == 0)
		{
			arr[i] = (char *)malloc(5 * sizeof(char));
			strcpy(arr[i], "Fizz");
		}
		else if (num >= 5 && num % 5 == 0)
		{
			arr[i] = (char *)malloc(5 * sizeof(char));
			strcpy(arr[i], "Buzz");
		}
		else
		{
			arr[i] = (char*)malloc(12 * sizeof(char));
			sprintf(arr[i], "%d", num);
		}
	}
	return (arr);
}
