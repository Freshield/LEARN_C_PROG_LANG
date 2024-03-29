//
// Created by Yang Yu on 2023/2/2.
//
#include "stdio.h"

#define LOWER   0
#define UPPER   300
#define STEP    20


int main() {
    for (int fahr = LOWER; fahr <= UPPER; fahr += STEP) {
        printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }
}