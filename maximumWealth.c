#include <stdio.h>
int maximumWealth(int **accounts, int accountsSize, int *accountsColSize);

int main() {
    // Test case [[1,2,3], [3,2,1]]
    int a1[] = {1, 2, 3};
    int a2[] = {3, 2, 1};
    int *accounts[] = {a1, a2};   // pointer array (2 müşteri)

    int cols[] = {3, 3};          // her satırın uzunluğu
    int result = maximumWealth(accounts, 2, cols);

    printf("Sonuç: %d\n", result);

    return 0;
}
int maximumWealth(int **accounts, int accountsSize, int *accountsColSize) {
    int m = 0;
    int y = 0;
    for (int i = 0; i < accountsSize; i++) {
        for (int j = 0; j < *accountsColSize ; j++) {
            y += accounts[i][j];
        }
        if (y > m) {
            m = y;
        }
        y = 0;
    }
    return m;
}