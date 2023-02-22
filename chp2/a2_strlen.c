//
// Created by Yang Yu on 2023/2/3.
//
#include "stdio.h"


int strlength(char s[]) {
    int i;

    i = 0;
    while (s[i] != '\0')
        ++i;
    return i;
}

int main() {
    printf("%d\n", strlength("asdfadfgasdf"));
    enum months { JAN = 1, FEB, MAR, APR};
    printf("%d %d %d %d", JAN, FEB, MAR, APR);

}