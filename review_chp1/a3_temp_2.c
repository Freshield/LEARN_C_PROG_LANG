//
// Created by freshield on 22-12-6.
//
#include <stdio.h>

#define     LOWER   0
#define     UPPER   300
#define     STEP    20

int main()
{
    for (int fahr = LOWER; fahr < UPPER; fahr = fahr + STEP) {
        printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }
    printf("\n");
    for (int fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP) {
        printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }
}