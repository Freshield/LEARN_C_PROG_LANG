//
// Created by freshield on 22-12-22.
//
#include <stdio.h>


int main() {
    int c, nl;

    nl = 0;
    while ((c = getchar()) != 'e') {
        if (c == '\n') {
            ++nl;
        }
    }
    printf("%d\n", nl);
}