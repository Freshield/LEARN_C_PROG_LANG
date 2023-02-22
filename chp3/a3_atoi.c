//
// Created by Yang Yu on 2023/2/6.
//
#include "stdio.h"
# include "ctype.h"


int main() {
    char s[] = "  1234  ";
    int i, n, sign;
    for (i = 0; isspace(s[i]); ++i)
        ;
    sign = (s[i] == '-') ? -1 : 1;
    if (s[i] == '+' || s[i] == '-') {
        i++;
    }
    for (n = 0; isdigit(s[i]); i++) {
        n = 10 * n + (s[i] - '0');
    }
    printf("%d", sign * n);
    return sign * n;

}