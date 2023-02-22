#include <stdio.h>

int main() {
    int c, i, nwhite, nother;
    int ndight[10];

    nwhite = nother = 0;
    for (int i = 0; i < 10; ++i) {
        ndight[i] = 0;
    }

    while ((c = getchar()) != '!'){
        if (c >= '0' && c <= '9'){
            ++ndight[c-'0'];
        }
        else if (c == ' ' || c == '\t' || c == '\n'){
            ++nwhite;
        }
        else {
            ++nother;
        }
    }
    printf("digits =");
    for (int i = 0; i < 10; ++i) {
        printf(" %d", ndight[i]);
    }
    printf(", white space = %d, other = %d\n", nwhite, nother);
}