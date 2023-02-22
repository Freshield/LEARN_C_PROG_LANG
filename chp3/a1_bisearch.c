//
// Created by Yang Yu on 2023/2/4.
//
#include "stdio.h"


int main() {
    int low, high, mid, n, x;
    low =0, n = 5, x = 3;
    int v[5];
    for (int i = 0; i < 5; ++i) {
        v[i] = i;
    }
    for (int i = 0; i < 5; ++i) {
        printf("%d\n", v[i]);
    }

    high = n - 1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (x < v[mid]) {
            high = mid - 1;
        } else if (x > v[mid]){
            low = mid + 1;
        } else {
            printf("%d\n", mid);
            return mid;
        }
    }
    printf("%d\n", -1);
    return -1;
}