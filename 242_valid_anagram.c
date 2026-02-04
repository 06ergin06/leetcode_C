#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

bool	isAnagram(char* s, char* t) {
	int	*map1;
	int	*map2;
	int	i;
	map1 = calloc(26, sizeof(int));
	map2 = calloc(26, sizeof(int));

	i = 0;
	while (s[i])
	{
		map1[(s[i] - 'a')] += 1;
		i++;
	}
	i = 0;
	while (t[i])
	{
		map2[(t[i] - 'a')] += 1;
		i++;
	}
	i = 0;
	while (i < 26) {
		if(map1[i] != map2[i])
		{
			free(map1);
			free(map2);
			return false;
		}
		i++;
	}
	free(map1);
	free(map2);
	return true;
}

int main()
{
	char *s = "rat";
	char *t = "car";
	printf("%d", isAnagram(s, t));
}