#include <stdio.h>

double iloczyn(int n, double[][n]);
double suma(int n, double[][n]);

int main() {
    int n;
    printf("n: ");
    scanf("%d", &n);
    double tab[n][n];
    int i, j;

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%lf", &tab[i][j]);
    
    printf("iloczyn na glownej przekatnej = %lf\n", iloczyn(n, tab));
    printf("suma nad glowna przekatna = %lf\n", suma(n, tab));
}

double iloczyn(int n, double arr[][n]) {
    int i;
    double iloczyn = 1;
    for (i = 0; i < n; i++)
        iloczyn *= arr[i][i];

    return iloczyn;
}

double suma(int n, double arr[][n]) {
    int i, j;
    double suma = 0;
    for (i = 0; i < n; i++)
        for (j = i + 1; j < n; j++)
        suma += arr[i][j];

    return suma;
}