#include <stdio.h>

int hammingWeight(int n) {
    int r = 0;
    while (n != 0) {
        if (n & 1) {
            r++;
        }
        n >>= 1;
    }
    return r;
}