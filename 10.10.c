#include <stdio.h>

void wczytaj_dane(int, int m, double[][m]);
double srednia_zespolu(int, double[]);
double srednia_studentow(int, int m, double[][m]);
double max_ocena(int, int m, double[][m]);

int main() {
    int n, m, i;
    printf("n, m: ");
    scanf("%d%d", &n, &m);
    double oceny[n][m];

    wczytaj_dane(n, m, oceny);

    for (i = 0; i < n; i++)
        printf("srednia zespolu %d: %.2lf\n", i, srednia_zespolu(m, oceny[i]));
    printf("srednia wszystkich studentow: %.2lf\n", srednia_studentow(n, m, oceny));
    printf("najlepsza ocena: %.2lf\n", max_ocena(n, m,oceny));
}

void wczytaj_dane(int n, int m, double oceny[][m]) {
    int i, j;
    for (i = 0; i < n; i++) {
        printf("oceny zespolu %d: ", i);
        for (j = 0; j < m; j++)
            scanf("%lf", &oceny[i][j]);
    }
}

double srednia_zespolu(int m, double oceny[]) {
    int i;
    double sum = 0;

    for (i = 0; i < m; i++)
        sum += oceny[i];

    return sum / m;
}

double srednia_studentow(int n, int m, double oceny[][m]) {
    int i;
    double sum = 0;

    for (i = 0; i < n; i++)
        sum += srednia_zespolu(m, oceny[i]);

    return sum / n;
}

double max_ocena(int n, int m, double oceny[][m]) {
    int i, j;
    double ocena = 0;

    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            ocena = (oceny[i][j] > ocena) ? oceny[i][j] : ocena;

    return ocena;
}
