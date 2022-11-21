#include <stdio.h>
#include <stdlib.h>
#include "11.11.h"

int main() {
    int i, j, n, m;
    printf("n, m: ");
    scanf("%d%d", &n, &m);

    double *tab_1d = stworz_1d(n); 
    double **tab_2d  = stworz_2d(n, m);

    printf("tab_1d: ");
    wczytaj_1d(n, tab_1d);
    printf("tab_2d:\n");
    wczytaj_2d(n, m, tab_2d);

    printf("tab_1d: ");
    wyswietl_1d(n, tab_1d);
    printf("tab_2d:\n");
    wyswietl_2d(n, m, tab_2d);

    printf("suma_1d = %lf\n", suma_1d(n, tab_1d));
    printf("suma_2d = %lf\n", suma_2d(n, m, tab_2d));

    printf("srednia_1d = %lf\n", srednia_1d(n, tab_1d));
    printf("srednia_2d = %lf\n", srednia_2d(n, m, tab_2d));

    printf("min_1d = %lf\n", min_1d(n, tab_1d));
    printf("min_2d = %lf\n", min_2d(n, m, tab_2d));
    
    printf("max_1d = %lf\n", max_1d(n, tab_1d));
    printf("max_2d = %lf\n", max_2d(n, m, tab_2d));

    printf("licz_1d = %d\n", licz_1d(n, 5, tab_1d));
    printf("licz_2d = %d\n", licz_2d(n, m, 5, tab_2d));

    inkrementacja_1d(n, 1, tab_1d);
    inkrementacja_2d(n, m, 1, 2, tab_2d);

    printf("tab_1d: ");
    wyswietl_1d(n, tab_1d);
    printf("tab_2d:\n");
    wyswietl_2d(n, m, tab_2d);

    free(tab_1d);
    usun_2d(n, &tab_2d);
}