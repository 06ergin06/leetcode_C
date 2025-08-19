#include <stdio.h>
long long zeroFilledSubarray(int *nums, int numsSize);
int main() {
    int arr[1] = {0};
    zeroFilledSubarray(arr, 1);
    return 0;
}
long long zeroFilledSubarray(int *nums, int numsSize) {
    long long res = 0;
    for (int i = 0; i < numsSize; i++) {
        long long j = 0;
        while (i < numsSize && nums[i] == 0) {
            i++;
            j++;
        }
        res += (j * (j + 1)) / 2;
    }
    return res;
}