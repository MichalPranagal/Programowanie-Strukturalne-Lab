#include <stdio.h>

void wypisz_temperatury(FILE*);
void dodaj_temperature(double, FILE*);

int main() {
    FILE *f;
    if ((f = fopen("14.6.in", "a+")) == NULL) {
        printf("blad\n");
        return 0;
    }

    wypisz_temperatury(f);
    dodaj_temperature(11.85, f);
    dodaj_temperature(36.6, f);
    dodaj_temperature(100., f);
    dodaj_temperature(28.9, f);
    wypisz_temperatury(f);

    if (fclose(f) != 0)
        printf("blad\n");
}

void wypisz_temperatury(FILE *f) {
    double t;
    rewind(f);
    while (!feof(f)) {
        fscanf(f, "%lf\n", &t);
        printf("%lf\n", t);
    }
}

void dodaj_temperature(double t, FILE *f) {
    fseek(f, 0, SEEK_END);
    fprintf(f, "%lf\n", t);
}