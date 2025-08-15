#include <stdio.h>

int searchInsert(int *nums, int numsSize, int target);

int main() {
    return 0;
}

int searchInsert(int *nums, int numsSize, int target) {
    int zero = 0;
    int* left = &zero;
    int right = numsSize - 1;
    int mid;
    if (target > nums[right]) {
        return numsSize;
    }
    if (nums[0] > target) {
        return 0;
    }

    while (right >= *left) {
        mid = (right + *left) / 2;
        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] < target) {
            *left = mid + 1;
        } else if (nums[mid] > target) {
            right = mid - 1;
        }
    }
    return *left;
}
