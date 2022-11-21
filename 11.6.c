#include <stdio.h>
#include <stdlib.h>

int licz(int, int k, double[][k], int);
double* f1(int, int k, int, double[][k]);
double* f2(int, int k, int, double[][k]);
void wyswietl(int, double[]);

int main() {
    int n = 3, k = 4;
    double tab2[][4] = {
            {1, 0, -2.5, 4},
            {0, 65, -12, 0},
            {-39, 23, 64145, 1}
    };

    int l_d = licz(n, k, tab2, 1);
    int l_u = licz(n, k, tab2, -1);
    double *tabD = f1(n, k, l_d, tab2);
    double *tabU = f2(n, k, l_u, tab2);

    wyswietl(l_d, tabD);
    wyswietl(l_u, tabU);

    free(tabD);
    free(tabU);
}


int licz(int n, int k, double arr[][k], int m) {
    int i, j, lic = 0;
    for (i = 0; i < n; i++)
        for (j = 0; j < k; j++)
            if (arr[i][j] * m > 0)
                lic++;

    return lic;
}

double* f(int n, int k, int l, int m, double arr[][k]) {
    int i, j, id = 0;
    double *A = (double*) malloc(l * sizeof(double));

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (arr[i][j] * m > 0)
                A[id++] = arr[i][j];

    return A;
}

double* f1(int n, int k, int l, double arr[][k]) {
    return  f(n, k, l, 1, arr);
}

double* f2(int n, int k, int l, double arr[][k]) {
    return  f(n, k, l, -1, arr);
}

void wyswietl(int n, double arr[]) {
    int i;
    for (i = 0; i < n; i++)
        printf("%lf ", arr[i]);
    printf("\n");
}
