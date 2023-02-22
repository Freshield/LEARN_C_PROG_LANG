//
// Created by Yang Yu on 2023/2/6.
//
#include "stdio.h"


int main() {
    int v[] = {3, 2, 4, 8, 5, 2, 1};
    int temp, n = 7;

    for (int gap = n / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; ++i) {
            for (int j = i - gap; j >= 0 && v[j] > v[j + gap]; j-= gap) {
                temp = v[j];
                v[j] = v[j + gap];
                v[j + gap] = temp;
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        printf("%d\n", v[i]);
    }
}