#include <stdio.h>
void sortColors(int *nums, int numsSize);
int main() {
    return 0;
}
void sortColors(int* nums, int numsSize) {
    for (int i = 1; i < numsSize; i++) {
        int key = nums[i];
        int j = i - 1;
        while (j >= 0 && nums[j] > key) {
            nums[j + 1] = nums[j];
            j = j - 1;
        }
        nums[j + 1] = key;
    }
}