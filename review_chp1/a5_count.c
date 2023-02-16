//
// Created by freshield on 22-12-22.
//
#include <stdio.h>


int main() {
    long nc;

    nc = 0;
    while (getchar() != 'e') {
        printf("%ld\n", nc);
        ++nc;
        printf("%ld\n", nc);
    }
    printf("%ld\n", nc);
}