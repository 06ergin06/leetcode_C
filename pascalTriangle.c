#include <stdio.h>
#include <stdlib.h>

int **generate(int numRows, int *returnSize, int **returnColumnSizes);

int main() {
    return 0;
}
int **generate(int numRows, int *returnSize, int **returnColumnSizes) {
    *returnSize = numRows;
    *returnColumnSizes = (int *)malloc(numRows * sizeof(int *));
    int **arr = (int **)malloc(numRows * sizeof(int *));
    for (int i = 0; i < numRows; i++) {
        (*returnColumnSizes)[i] = i + 1;
        arr[i] = (int *)malloc((i + 1) * sizeof(int));
        arr[i][0] = 1;
        arr[i][i] = 1;
        for (int j = 1; j < i; j++) {
            arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
        }
    }
    return arr;
}