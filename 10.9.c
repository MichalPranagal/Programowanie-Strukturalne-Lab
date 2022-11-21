#include <stdio.h>

int wyzeruj(int, int m, double[][m], int[]);

int main() {
    int n, m, i, j, id;
    printf("n, m: ");
    scanf("%d%d", &n, &m);
    double tab[n][m];
    int B[n];
    
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            scanf("%lf", &tab[i][j]);

    id = wyzeruj(n, m, tab, B);

    printf("tab:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++)
            printf("%lf ", tab[i][j]);
        printf("\n");
    }


    printf("B: ");
    for (i = 0; i < id; i++)
        printf("%d ", B[i]);
    printf("\n");
}

int wyzeruj(int n, int m, double arr[n][m], int kol[]) {
    int i, j, lic, id = 0;

    for (i = 0; i < m; i++) {
        lic = 0;
        for (j = 0; j < n; j++) {
            if (arr[j][i] == 0)
                lic++;
        }
        if (lic > n / 2) {
            kol[id++] = i;
            for (j = 0; j < n; j++) {
                arr[j][i] = 0;
            }
        }
    }

    return id;
}