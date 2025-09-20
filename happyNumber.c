#include <stdbool.h>
#include <stdio.h>

int sumOfSquares(int n) {
    int res = 0;
    while (n > 0) {
        int d = n % 10;
        res += d * d;
        n /= 10;
    }
    return res;
}

bool isHappy(int n) {
    int slow = sumOfSquares(n);
    int fast = sumOfSquares(sumOfSquares(n));
    while (slow != fast) {
        slow = sumOfSquares(slow);
        fast = sumOfSquares(sumOfSquares(fast));
    }
    return fast == 1;
}