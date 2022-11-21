#include <stdio.h>
#include <stdlib.h>
#include "11.4.h"

int main() {
    int n = 3, k = 5, i;
    
    double *tab_1d = stworz_1d(k);
    double **tab_2d = stworz_2d(n, k);

    wyswietl_1d(k, tab_1d);
    wyswietl_2d(n, k, tab_2d);

    usun_1d(&tab_1d);
    for (i = 0; i < n; i++)
        usun_1d(&tab_2d[i]);
    free(tab_2d);
}

