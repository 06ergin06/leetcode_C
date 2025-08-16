#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int maximum69Number(int num);

int main() {
    printf("%d", maximum69Number(996666));
    return 0;
}

int maximum69Number(int num) {
    int temp = num;
    int len = 0;

    while (temp > 0) {
        temp /= 10;
        len++;
    }

    int *arr = malloc(len * sizeof(int));
    for (int i = 0; i < len; i++) {
        arr[len - i - 1] = num % 10;
        num /= 10;
    }

    for (int i = 0; i < len; i++) {
        if (arr[i] == 6) {
            arr[i] = 9;
            break;
        }
    }
    num = 0;
    for (int i = 0; i < len; i++) {
        num += arr[i] * pow(10,len-i-1);
    }
    free(arr);
    return num;
}