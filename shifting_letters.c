int	shift(char s, int shift)
{
	if (shift > 26)
		shift %= 26;
	if (s + shift > 'z')
		s += 'a' - 'z' - 1;
	return (s + shift);
}
char	*shiftingLetters(char *s, int *shifts, int shiftsSize)
{
	int	total_shift;
	int i;

	total_shift = 0;
	i = 0;
	while (i < shiftsSize)
	{
		if (shifts[i] > 26)
			shifts[i] %= 26;
		total_shift += shifts[i];
		i++;
	}
	total_shift %= 26;
	s[0] = shift(s[0], total_shift);
	i = 1;
	while (i < shiftsSize)
	{
		if (shifts[i - 1] > 26)
			shifts[i - 1] %= 26;
		total_shift -= shifts[i - 1];
		s[i] = shift(s[i], total_shift);
		i++;
	}
	return (s);
}


int	main(void)
{
	char	*s;
	int		shifts[] = {3, 5, 9};

	s = "abc";
	shiftingLetters(s, shifts, 3);
}
