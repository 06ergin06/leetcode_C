#include <stdbool.h>
#include <stdio.h>

bool searchMatrix(int **matrix, int matrixSize, int *matrixColSize, int target);

int main() {
    return 0;
}

bool searchMatrix(int **matrix, int matrixSize, int *matrixColSize, int target) {
    int i = 0;
    while (i < matrixSize) {
        if (matrix[i][0] > target) {
            return false;
        }
        int j = 0;
        while (j < matrixColSize[i]) {
            if (matrix[i][j] == target) {
                return true;
            }
            if (matrix[i][j] > target) {
                break;
            }
            j++;
        }
        i++;
    }
    return false;
}