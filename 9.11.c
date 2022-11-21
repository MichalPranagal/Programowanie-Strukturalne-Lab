#include <stdio.h>
#include <math.h>

void polozenie(double, double, double*, int*);

int main() {
    double x, y, odleglosc;
    int cwiartka;

    printf("x, y: ");
    scanf("%lf%lf", &x, &y);
    
    polozenie(x, y, &odleglosc, &cwiartka);
    printf("odleglosc od poczatku ukladu wspolrzednych: %lf, nr. cwiartki: %d\n", odleglosc, cwiartka);
}

void polozenie(double x, double y, double *odleglosc, int *cwiartka) {
    *odleglosc = sqrt(x * x + y * y);

    if (y >= 0) {
        if (x >= 0)
            *cwiartka = 1;
        else 
            *cwiartka = 2;
    } else {
        if (x < 0)
            *cwiartka = 3;
        else
            *cwiartka = 4;
    }
}