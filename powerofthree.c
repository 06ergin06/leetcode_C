// https://leetcode.com/problems/power-of-three/description/
#include <math.h>
#include <stdbool.h>
#include <stdio.h>

bool isPowerOfThree(int n);

int main() {
    printf("%d", isPowerOfThree(243));
    return 0;
}

bool isPowerOfThree(int n) {
    if (n == 0) {
        return false;
    } else {
        double val = log10(n) / log10(3);
        if (val == floor(val)) {
            return true;
        } else {
            return false;
        }
    }
}