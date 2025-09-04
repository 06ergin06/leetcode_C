#include <stdio.h>
void moveZeroes(int *nums, int numsSize);

int main(){
    int nums[2] = {0,1};
    moveZeroes(nums,2);
    return 0;
}

void moveZeroes(int *nums, int numsSize) {
    int j = 0;
    int i = 0;
    for (i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            nums[j] = nums[i];
            j++;
        }
    }
    for (i = j; i < (numsSize); i++) {
        nums[i] = 0;
    }
}