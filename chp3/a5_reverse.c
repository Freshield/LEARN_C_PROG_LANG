//
// Created by Yang Yu on 2023/2/6.
//
#include "stdio.h"
#include "string.h"
#include "a5_reverse.h"


void reverse_string(char s[]) {
    int c, i, j;
    for (i = 0, j = strlen(s) - 1; i < j; i++, j--) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}


//int main() {
//    char s[] = "asdfjkl;";
//
//    reverse_string(s);
//    printf("%s", s);
//}