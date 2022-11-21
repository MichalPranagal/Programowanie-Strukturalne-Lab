#include <stdio.h>

void wczytaj(int, int m, double[][m]);
void wyswietl(int, int m, double[][m]);
double suma(int, int m, double[][m]);
double srednia(int, int m, double[][m]);

int main() {
    int n, m, opt;
    printf("n, m: ");
    scanf("%d%d", &n, &m);
    double tab[n][m];

    do {
        printf("wybierz opcje:\n");
        printf("1. wczytaj tab (%d wierszy, %d kolumn):\n", n, m);
        printf("2. wyswietl tab\n");
        printf("3. wyswietl sume z tab\n");
        printf("4. wyswietl srednia z tab\n");
        printf("0. zakoncz\n\n");
        scanf("%d", &opt);

        switch (opt) {
            case 0:
                return 0;
                break;

            case 1:
                printf("tab:\n\n");
                wczytaj(n, m, tab);
                break;
            
            case 2:
                printf("tab:\n\n");
                wyswietl(n, m, tab);
                break;

            case 3:
                printf("suma = %lf\n\n", suma(n, m, tab));
                break;
        
            case 4:
                printf("srednia = %lf\n\n", srednia(n, m, tab));
                break;
                
            default:
                printf("niepoprawna opcja\n");
        }
    } while (opt != 0);
}

void wczytaj(int n, int m, double arr[][m]) {
    int i, j;
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            scanf("%lf", &arr[i][j]);
}

void wyswietl(int n, int m, double arr[][m]) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++)
            printf("%lf ", arr[i][j]);
        printf("\n");
    }
}


double suma(int n, int m, double arr[][m]) {
    int i, j;
    double sum = 0;
    for (i = 0; i < n; i++) 
        for (j = 0; j < m; j++)
            sum += arr[i][j];
    
    return sum;
}

double srednia(int n, int m, double arr[][m]) {
    return suma(n, m, arr) / (n * m);
}