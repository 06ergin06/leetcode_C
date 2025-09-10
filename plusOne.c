#include <stdio.h>
#include <stdlib.h>

int *plusOne(int *digits, int digitsSize, int *returnSize) {
    int carry = 1;
    for (int i = digitsSize - 1; i >= 0; i--) {
        int t = digits[i] + carry;
        digits[i] = t % 10;
        carry = t / 10;
    }
    if (carry) {
        digits = realloc(digits, (digitsSize + 1) * sizeof(int));
        for (int i = digitsSize - 1; i >= 0; i--) {
            digits[i + 1] = digits[i];
        }
        digits[0] = carry;
        *returnSize = digitsSize + 1;
    } else {
        *returnSize = digitsSize;
    }
    return digits;
}