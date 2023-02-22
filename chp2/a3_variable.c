//
// Created by Yang Yu on 2023/2/3.
//
#include "stdio.h"


int main() {
    const double e = 2.718281;
    const char msg[] = "warning: ";
    int year = 2024;
    if (((year % 4 == 0 && year % 100 != 0) || year % 400 == 0))
        printf("%d is a leap year\n", year);
    else
        printf("%d is not a leap year\n", year);

}