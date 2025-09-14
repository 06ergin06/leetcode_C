#include <stdio.h>

int max(int n1, int n2) {
    if (n1 > n2) {
        return n1;
    }
    return n2;
}
int rob(int *nums, int numsSize) {
    int robbed = nums[0];
    int nRobbed = 0;
    int current_rob = 0;
    int current_not_rob = 0;
    for (int i = 1; i < numsSize; i++) {
        current_rob = nRobbed + nums[i];
        current_not_rob = max(robbed, nRobbed);
        robbed = current_rob;
        nRobbed = current_not_rob;
    }
    return max(robbed,nRobbed);
}