// https://leetcode.com/problems/power-of-two/description/
#include <math.h>
#include <stdbool.h>
#include <stdio.h>

bool isPowerOfTwo(int n);

int main() {
    printf("%d", isPowerOfTwo(4));
    return 0;
}

bool isPowerOfTwo(int n) {
    if (n == 0) {
        return false;
    } else {
        double val = log10(n) / log10(2);
        if (val == floor(val)) {
            return true;
        } else {
            return false;
        }
    }
}