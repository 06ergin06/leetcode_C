int converter(char a)
{
	switch (a)
	{
	case 'I':
		return 1;
		break;
	case 'V':
		return 5;
		break;
	case 'X':
		return 10;
		break;
	case 'L':
		return 50;
		break;
	case 'C':
		return 100;
		break;
	case 'D':
		return 500;
		break;
	case 'M':
		return 1000;
		break;
	default:
		return 0;
		break;
	}
}

int romanToInt(char* s) {
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (s[i])
	{
		if(s[i + 1] && converter(s[i]) < converter(s[i + 1]))
		{
			res -= converter(s[i]);
		}
		else
		{
			res += converter(s[i]);
		}
		i++;
	}
	return res;
}
