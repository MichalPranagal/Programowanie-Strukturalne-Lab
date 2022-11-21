#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, char *argv[]) {
    FILE *f;
    int i, n, l, l_l = 0, suma = 0;
    char c;

    if (argc == 3) {
        f = fopen(argv[2], "w+");
        n = atoi(argv[1]);
    } else {
        f = fopen("dane.txt", "w+");
        n = 10;
    }

    if (f == NULL) {
        printf("blad\n");
        return 0;
    }

    for (i = 1; i <= n; i++)
        fprintf(f, "%d ", i);
    
    rewind(f);
    while (!feof(f)) {
        fscanf(f, "%d", &l);
        if (!feof(f)) {
            printf("%d ", l);
            suma += l;
            l_l++;
        }
    }
    printf("\nsrednia: %lf\n", (double) suma / l_l);
}