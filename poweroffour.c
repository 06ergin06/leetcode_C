// https://leetcode.com/problems/power-of-four/description/
#include <math.h>
#include <stdbool.h>
#include <stdio.h>

bool isPowerOfFour(int n);

int main() {
    printf("%d", isPowerOfFour(4));
    return 0;
}

bool isPowerOfFour(int n) {
    if (n == 0) {
        return false;
    } else {
        double val = log10(n) / log10(4);
        if (val == floor(val)) {
            return true;
        } else {
            return false;
        }
    }
}