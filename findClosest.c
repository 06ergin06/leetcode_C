#include <stdio.h>
#include <stdlib.h>

int findClosest(int x, int y, int z) {
    int l1 = abs(z - x);
    int l2 = abs(z - y);
    if (l1 > l2) {
        return 2;
    }else if(l1 < l2){
        return 1;
    }else{
        return 0;
    }
    return 0;
}