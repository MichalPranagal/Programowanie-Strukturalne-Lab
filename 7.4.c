#include <stdio.h>

void wyswietl_place(int, double[]);

int main() {
    int n, i;
    printf("n: ");
    scanf("%d", &n);
    double zarobki[n];

    for (i = 0; i < n; i++)
        scanf("%lf", &zarobki[i]);

    wyswietl_place(n, zarobki);
}


void wyswietl_place(int n, double zarobki[]) {
    double suma = 0, z;
    int i;

    printf("Nowa lista plac:\n");
    for (i = 0 ; i < n; i++) {
        z = (zarobki[i] <= 5000) ? zarobki[i] * 1.1 : zarobki[i] * 1.05;
        suma += z;
        printf("%.2lf\n", z);
    }
    printf("suma = %.2f\n", suma);
}