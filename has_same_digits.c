#include <stdbool.h>
#include <string.h>

bool	hasSameDigits(char *s)
{
	int	i;
	int	len;

	i = 0;
	len = strlen(s);
	while (s[i] && s[i + 1] && len != 2)
	{
		s[i] = (((s[i] - '0') + (s[i + 1] - '0')) % 10) + '0';
		i++;
		if (i == len - 1 && i != 1)
		{
			i = 0;
			len--;
		}
	}
	return (s[0] == s[1]);
}
