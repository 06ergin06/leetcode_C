#include <stdbool.h>
#include <stdio.h>

bool searchMatrix(int **matrix, int matrixSize, int *matrixColSize, int target);

int main() {
    // Matrisin: [[1, 1]] -> 1 satır, 2 sütun
    int data[1][2] = {{1, 1}};
    int *matrix[] = {data[0]}; // Fonksiyonuna yollamak için ayarlama

    int satir_sayisi = 1;
    int sutun_sayisi = 2;
    int hedef = 0;

    // Senin fonksiyonunu çağırır
    bool sonuc = searchMatrix((int **)matrix, satir_sayisi, &sutun_sayisi, hedef);

    // Sadece sonucu yazar
    printf("%s\n", sonuc ? "true" : "false");

    return 0;
}
bool searchMatrix(int **matrix, int matrixSize, int *matrixColSize, int target) {
    for (int i = 0; i < matrixSize; i++) {
        int last = matrix[i][matrixColSize[0] - 1];
        if (matrixSize + matrixColSize[0] == 2) {
            if (last == target) {
                return true;
            } else {
                return false;
            }
        }

        if (last == target) {
            return true;
        } else if (last > target) {
            int left = 0;
            int right = matrixColSize[0] - 1;

            while (left <= right) {
                int mid = left + (right - left) / 2;
                if (matrix[i][mid] == target) {
                    return true;
                } else if (matrix[i][mid] < target) {
                    left = mid + 1;
                } else {
                    right = mid - 1;
                }
            }
        } else {
            continue;
        }
    }
    return false;
}