//
// Created by Yang Yu on 2023/2/3.
//
#include "stdio.h"


int main() {
    int n1 = 0, n2 = 0;
    int x1 = ++n1;
    int x2 = n2++;
    printf("x1: %d, x2: %d\n", x1, x2);
    int z = (x1 > x2) ? x1 : x2;
    printf("%d", z);
}