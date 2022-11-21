#include <stdio.h>

int F1(int, int k, double[][k], double[]);
int F2(int, int k, double[][k], double[]);
int F3(int, int k, double[][k]);
void wyswietl(int, double[]);

int main() {
    int n, k, i, j, id;
    printf("n, k: ");
    scanf("%d%d", &n, &k);
    double tab[n][k], D[n * k], U[n * k];

    for (i = 0; i < n; i++)
        for (j = 0; j < k; j++)
            scanf("%lf", &tab[i][j]);

    id = F1(n, k, tab, D);
    printf("D: ");
    wyswietl(id, D);

    id = F2(n, k, tab, U);
    printf("U: ");
    wyswietl(id, U);

    printf("elementow = 0: %d\n", F3(n, k, tab));
}

int F1(int n, int k, double arr[][k], double D[]) {
    int i, j, id = 0;

    for (i = 0; i < n; i++)
        for (j = 0; j < k; j++)
            if (arr[i][j] > 0)
                D[id++] = arr[i][j];

    return id;
}

int F2(int n, int k, double arr[][k], double U[]) {
    int i, j, id = 0;

    for (i = 0; i < n; i++)
        for (j = 0; j < k; j++)
            if (arr[i][j] < 0)
                U[id++] = arr[i][j];

    return id;
}

int F3(int n, int k, double arr[][k]) {
    int i, j, x = 0;

    for (i = 0; i < n; i++)
        for (j = 0; j < k; j++)
            if (arr[i][j] == 0)
                x++;

    return x;
}


void wyswietl(int n, double arr[]) {
    int i;
    for (i = 0; i < n; i++)
        printf("%lf ", arr[i]);
    printf("\n");
}