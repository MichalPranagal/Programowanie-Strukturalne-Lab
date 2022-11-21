#include <stdio.h>

void dekompozycja(double, int*, double*);

int main() {
    double a, b, c, rzeczywista;
    int calkowita;
    scanf("%lf%lf%lf", &a, &b, &c);

    dekompozycja(a, &calkowita, &rzeczywista);
    printf("czesc calkowita = %d, czesc rzeczywista = %lf\n", calkowita, rzeczywista);
    dekompozycja(b, &calkowita, &rzeczywista);
    printf("czesc calkowita = %d, czesc rzeczywista = %lf\n", calkowita, rzeczywista);
    dekompozycja(c, &calkowita, &rzeczywista);
    printf("czesc calkowita = %d, czesc rzeczywista = %lf\n", calkowita, rzeczywista);
}


void dekompozycja(double liczba, int *calkowita, double *rzeczywista) {
    *calkowita = (int) liczba;
    *rzeczywista = liczba - *calkowita;
}
