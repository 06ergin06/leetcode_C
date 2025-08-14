// https://leetcode.com/problems/largest-3-same-digit-number-in-string/description/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *largestGoodInteger(char *num);

int main() {
    printf("%s", largestGoodInteger("4981904820931099993021308888"));
    return 0;
}

char *largestGoodInteger(char *num) {
    static char sbs[10][4] = {"999", "888", "777", "666", "555", "444", "333", "222", "111", "000"};
    int i = 0;
    char *dest;
    while (i < 10) {
        dest = strstr(num, sbs[i]);
        if (dest != NULL) {
            return sbs[i];
        }
        i++;
    }
    return "";
}