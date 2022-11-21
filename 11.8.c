#include <stdio.h>
#include <stdlib.h>

double* sumaW(int, int m, double[][m], double*);

int main() {
    int n, m, i, j;
    double *sumW, *sumK;
    printf("n, m: ");
    scanf("%d%d", &n, &m);
    double tab[n][m];
    sumK = (double*) calloc(m, sizeof(double));

    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            scanf("%lf", &tab[i][j]);

    sumW = sumaW(n, m, tab, sumK);

    printf("sumW: ");
    for (i = 0; i < n; i++)
        printf("%lf ", sumW[i]);

    printf("\nsumK: ");
    for (i = 0; i < m; i++)
        printf("%lf ", sumK[i]);
    printf("\n");
    
    free(sumK);
    free(sumW);
}

double* sumaW(int n, int m, double tab[n][m], double *sumK) {
    int i, j;
    double *sumW = (double*) calloc(n, sizeof(double));

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            sumW[i] += tab[i][j];
            sumK[j] += tab[i][j];
        }
    }

    return sumW;
}
