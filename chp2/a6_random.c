//
// Created by Yang Yu on 2023/2/3.
//
#include "stdio.h"


unsigned long int next = 1;


int rand_self() {
    next = next * 1103515245 + 12345;
    return (unsigned int)(next / 65535) % 32768;
}

void srand_self(unsigned int seed) {
    next = seed;
}

int main() {
    printf("%d", rand_self());
}