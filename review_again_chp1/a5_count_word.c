//
// Created by Yang Yu on 2023/2/2.
//
#include "stdio.h"


int main() {
    double nc;
    int c;
//    while ((c = getchar()) != 'q') {
//        if (c != '\n') {
//            ++nc;
//        }
//    }
    for (nc = 0; getchar() != 'q'; ++nc)
        ;
    printf("%.0f\n", nc);

}