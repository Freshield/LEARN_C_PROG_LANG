//
// Created by Yang Yu on 2023/2/2.
//
#include "stdio.h"


int main() {
    int c, nl;

    nl = 0;
    while ((c = getchar()) != 'q')
        if (c == '\n')
            ++nl;
    printf("%d\n", nl);
}