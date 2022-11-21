#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double* odleglosci(int, double**);

int main() {
    int i, n;
    double **punkty, *odl;

    printf("n: ");
    scanf("%d", &n);
    punkty = (double**) malloc(2 * sizeof(double*));
    punkty[0] = (double*) malloc(n * sizeof(double));
    punkty[1] = (double*) malloc(n * sizeof(double));

    for (i = 0; i < n; i++) {
        scanf("%lf%lf", &punkty[0][i], &punkty[1][i]);
    } 

    odl = odleglosci(n, punkty);

    for (i = 0; i < n; i++)
        printf("(%lf; %lf) : %lf\n", punkty[0][i], punkty[1][i], odl[i]);


    free(punkty[0]);
    free(punkty[1]);
    free(punkty);
}


double* odleglosci(int n, double **punkty) {
    int i;
    double x, y;
    double *odl = (double*) malloc(n * sizeof(double));

    for (i = 0; i < n; i++) {
        x = punkty[0][i];
        y = punkty[1][i];
        odl[i] = sqrt(x * x + y * y);
    }

    return odl;
}