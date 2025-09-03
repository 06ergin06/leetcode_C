#include <stdio.h>
#include <stdlib.h>

void rotate(int *nums, int numsSize, int k);

int main() {
    int nums[7] = {1, 2, 3, 4, 5, 6, 7};
    rotate(nums, 7, 3);
    return 0;
}

void rotate(int *nums, int numsSize, int k) {
    int *arr = calloc(numsSize , sizeof(int));
    k %= numsSize;
    int i = 0;
    for (i = 0; i < numsSize; i++) {
        arr[i] = nums[i];
    }

    int j = 0;
    for (i = k; i > 0; i--) {
        nums[j] = arr[numsSize - i];
        j++;
    }
    j = 0;
    for (i = k; i < numsSize; i++) {
        nums[i] = arr[j];
        j++;
    }
    free(arr);
}