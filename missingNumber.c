#include <stdbool.h>
#include <stdio.h>
int missingNumber(int *nums, int numsSize);

int main() {
    return 0;
}

int missingNumber(int *nums, int numsSize) {
    // XOR
    // int res = numsSize;
    // for (int i = 0; i < numsSize; i++) {
    //     res ^= i ^ nums[i];
    // }
    // return res;

    // Gauss
    int sum = numsSize * (numsSize + 1) / 2;
    int s = 0;
    for (int i = 0; i < numsSize; i++) {
        s += nums[i];
    }
    return sum - s;
}