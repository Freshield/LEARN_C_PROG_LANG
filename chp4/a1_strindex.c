//
// Created by Yang Yu on 2023/2/7.
//
#include "stdio.h"
#define MAXLINE 1000

int get_line(char line[], int max);
int str_index(char source[], char searchfor[]);

char pattern[] = "ould";


int main() {
    char line[MAXLINE];
    int index, found = 0;

    while (get_line(line, MAXLINE) > 0) {
        if ((index = str_index(line, pattern)) >= 0) {
            printf("%s - %s - %d", line, pattern, index);
            found++;
        }
    }
    return found;
}
