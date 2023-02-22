//
// Created by Yang Yu on 2023/2/3.
//
#include "stdio.h"
#include "ctype.h"


int lower(int c) {
    if (c >= 'A' && c <= 'Z')
        return c + 'a' - 'A';
    else
        return c;
}

int main() {
    printf("%c", lower('A'));
    printf("%c", lower('b'));
    printf("%c", tolower('A'));
}