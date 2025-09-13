#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int maxFreqSum(char *s) {
    int len = strlen(s);
    int *map = calloc(26, sizeof(int));
    for (int i = 0; i < len; i++) {
        map[s[i] - 'a']++;
    }
    int maxV = 0, maxC = 0;
    for (int i = 0; i < 26; i++) {
        if (i == 0 || i == 4 || i == 8 || i == 14 || i == 20) {
            if (map[i] > maxV)
                maxV = map[i];
        } else {
            if (map[i] > maxC)
                maxC = map[i];
        }
    }
    free(map);
    return (maxV + maxC);
}