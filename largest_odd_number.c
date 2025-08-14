// https://leetcode.com/problems/largest-odd-number-in-string/description/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *largestOddNumber(char *num);

int main() {
    printf("%s", largestOddNumber("52"));
    return 0;
}

char *largestOddNumber(char *num) {
    int len = strlen(num) - 1;
    if (num[len] % 2 == 1) {
        return num;
    }
    char *res = malloc(len + 1);
    for (int i = len - 1; i >= 0; i--) {
        if (num[i] % 2 == 1) {
            strncpy(res, num, i + 1);
            res[i + 1] = '\0';
            return res;
        }
    }
    free(res);
    return "";
}