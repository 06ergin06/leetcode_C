#include <stdio.h>

void swap(char *a, char *b) {
    char t = *a;
    *a = *b;
    *b = t;
}
void reverseString(char *s, int sSize) {
    for (int i = 0; i < sSize / 2; i++) {
        swap(&s[i],&s[sSize - i - 1]);
    }
}