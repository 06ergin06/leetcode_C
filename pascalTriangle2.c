#include <stdio.h>
#include <stdlib.h>
int *getRow(int rowIndex, int *returnSize);

int main() {
    return 0;
}

int *getRow(int rowIndex, int *returnSize) {
    *returnSize = rowIndex + 1;
    int *arr = (int *)malloc((rowIndex + 1) * sizeof(int));
    arr[0] = 1;
    arr[rowIndex] = 1;
    for (int i = 1; i < rowIndex; i++) {
        long long tmp = (long long)arr[i-1] * (rowIndex - i + 1) / i;
        arr[i] = (int)tmp;
    }
    return arr;
}