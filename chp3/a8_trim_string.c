//
// Created by Yang Yu on 2023/2/6.
//
#include "stdio.h"
#include "string.h"


int main() {
    char s[] = "  hello world  ";
    int n;
    for (n = strlen(s) - 1; n >= 0; n--) {
        if (s[n] != ' ' && s[n] != '\t' && s[n] != '\n') {
            break;
        }
    }
    s[n + 1] = '\0';
    printf("%s", s);
    return 0;
}