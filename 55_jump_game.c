#include <stdbool.h>

bool canJump(int* nums, int numsSize) {
	int	max;

	for (int i = 0; i < numsSize; i++)
	{
		if(i > max)
			return false;
		if(i + nums[i] > max)
			max = i + nums[i];
		if(max >= numsSize - 1)
			return true;
	}
	return true;
}
