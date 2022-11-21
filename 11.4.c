#include <stdio.h>
#include <stdlib.h>
#include "11.4.h"

double* stworz_1d(int n) {
    double *arr = calloc(n, sizeof(double));
    return arr;
}

void wyswietl_1d(int n, double *arr) {
    int i;
    for (i = 0; i < n; i++)
        printf("%lf ", arr[i]);
    printf("\n");
}

void usun_1d(double **arr) {
    free(*arr);
}

double** stworz_2d(int n, int k) {
    int i;
    double **arr = malloc(n * sizeof(double*));
    for (i = 0; i < n; i++)
        arr[i] = stworz_1d(k);

    return arr;
}

void wyswietl_2d(int n, int k, double **arr) {
    int i;
    for (i = 0; i < n; i++)
        wyswietl_1d(k, arr[i]);
}

