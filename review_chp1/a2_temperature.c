//
// Created by freshield on 22-12-6.
//
#include <stdio.h>

int main()
{
    int fahr;
    float celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("Begin to transfer\n");
    while (fahr <= upper) {
        celsius = 5. * (fahr - 32) / 9.;
        printf("%d\t%6.2f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
