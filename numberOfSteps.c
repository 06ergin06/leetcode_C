#include <stdio.h>

int numberOfSteps(int num) {
    int r = 0;
    while (num > 0) {
        if (num % 2 == 0) {
            num /= 2;
        } else {
            num--;
        }
        r++;
    }
    return r;
}