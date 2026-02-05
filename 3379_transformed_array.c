#include <stdlib.h>

int*	constructTransformedArray(int* nums, int numsSize, int* returnSize) {
	int	*res;
	int	i;
	int	target;

	*returnSize = numsSize;
	res = malloc(numsSize * sizeof(int));
	if (!res)
		return (NULL);
	i = 0;
	while (i < numsSize) {
		target = (i + nums[i]) % numsSize;
		if (target < 0)
			target += numsSize;
		res[i] = nums[target];
		i++;
	}
	return (res);
}