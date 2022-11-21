#include <stdio.h>

void podaj_okres(double, double);

int main() {
    double wplata = 1000, procent = 5;
    podaj_okres(wplata, procent);
}


void podaj_okres(double wplata, double procent) {
    double kwota = wplata;
    int okres = 0;
    while (kwota < 2 * wplata) {
        kwota *= (1 + procent / 100);
        okres++;
    }

    printf("kwota bedzie podwojona po %d okresach rozliczeniowych i bedzie wynosic dokladnie %.2f\n", okres, kwota);

}