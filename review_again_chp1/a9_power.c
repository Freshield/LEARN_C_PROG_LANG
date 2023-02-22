//
// Created by Yang Yu on 2023/2/2.
//
#include "stdio.h"


int power(int base, int n);

int main() {
    for (int i = 0; i < 10; ++i)
        printf("%d %d %d\n", i, power(2, i), power(-3, i));
    return 0;
}

int power(int base, int n) {
    int p = 1;
    for (int i = 0; i < n; ++i)
        p = p * base;
    return p;
}
