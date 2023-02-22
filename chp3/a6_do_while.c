//
// Created by Yang Yu on 2023/2/6.
//
#include "stdio.h"
#include "a5_reverse.h"


void itoa_number(int n, char s[]) {
    int i, sign;

    if ((sign = n) < 0) {
        n = -n;
    }
    i = 0;
    do {
        s[i++] = n % 10 + '0';
    } while ((n /= 10) > 0);

    if (sign < 0) {
        s[i++] = '-';
    }
    s[i] = '\0';
    reverse_string(s);
}

int main() {
    int n = 12345;
    char s[] = "       ";

    itoa_number(n, s);

    printf("%s", s);

}