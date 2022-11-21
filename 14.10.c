#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    FILE *f1, *f2;
    int i;
    char c;

    if ((f1 = fopen("14.10.in", "r")) == NULL ||
        (f2 = fopen("14.10.out", "w")) == NULL) {
        printf("blad\n");
        return 0;
    }

    for (i = 0; !feof(f1); i++) {
        c = fgetc(f1);
        if (i % 3 == 0 && !feof(f1))
            fprintf(f2, "%c", c);
    }

}