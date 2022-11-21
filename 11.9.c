#include <stdio.h>
#include <stdlib.h>

double** towary_powyzej_w(int, int, double, double**);

int main() {
    int i, n, n_q = 0;
    double w;
    double **dane, **dane_q;

    printf("n, min wartosc: ");
    scanf("%d%lf", &n, &w);

    dane = (double**) malloc(2 * sizeof(double*));
    dane[0] = (double*) malloc(n * sizeof(double));
    dane[1] = (double*) malloc(n * sizeof(double));

    printf("dane: cena, ilosc:\n");
    for (i = 0; i < n; i++) {
        scanf("%lf%lf", &dane[0][i], &dane[1][i]);
        if (dane[0][i] * dane[1][i] > w)
            n_q++;
    }

    dane_q = towary_powyzej_w(n, n_q, w, dane);

    printf("Towary o wartosci powyzej %lf:\n", w);
    for (i = 0; i < n_q; i++)
        printf("%.2lf %.2lf\n", dane_q[0][i], dane_q[1][i]);

    free(dane[0]);
    free(dane[1]);
    free(dane_q[0]);
    free(dane_q[1]);
    free(dane);
    free(dane_q);
}


double** towary_powyzej_w(int n, int n_q, double w, double **dane) {
    double **dane_q = (double**) malloc(2 * sizeof(double**));
    dane_q[0] = (double*) malloc(n * sizeof(double));
    dane_q[1] = (double*) malloc(n * sizeof(double));

    int i, id = 0;
    for (i = 0; i < n; i++) {
        if (dane[0][i] * dane[1][i] > w) {
            dane_q[0][id] = dane[0][i];
            dane_q[1][id++] = dane[1][i];
        }
    }

    return dane_q;
}
