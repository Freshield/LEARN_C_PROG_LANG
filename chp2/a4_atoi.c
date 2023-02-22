//
// Created by Yang Yu on 2023/2/3.
//
#include "stdio.h"


int atoi_self(char s[]) {

    int n = 0;
    for (int i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
        n = 10 * n + (s[i] - '0');
    return n;
}

int main() {
    printf("%d", atoi_self("123456"));
}