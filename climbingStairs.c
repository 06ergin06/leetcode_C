#include <stdio.h>

int climbStairs(int n) {
    if (n <= 2)
        return n;
    int two = 1;
    int one = 2;
    int res = 0;
    for (int i = 3; i <= n; i++) {
        res = two + one;
        two = one;
        one = res;
    }
    return res;
}