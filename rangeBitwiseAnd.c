#include <stdio.h>
int rangeBitwiseAnd(int left, int right);
int main() {
    rangeBitwiseAnd(5, 7);
    return 0;
}
int rangeBitwiseAnd(int left, int right) {
    int s = 0;
    while (left != right) {
        left >>= 1;
        right >>= 1;
        s++;
    }
    return left << s;
}