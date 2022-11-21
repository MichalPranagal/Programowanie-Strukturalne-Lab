#include <stdio.h>

struct Pracownik {
    char imie[30], nazwisko[30];
    int liczba_godzin;
    double stawka, premia, do_wyplaty;
};

void placa_do_pliku(struct Pracownik, FILE*);
double placa_z_pliku(FILE*);
void wczytaj_dane(struct Pracownik*);
double placa(struct Pracownik);

int main() {
    int i, n;
    double p, w;
    FILE *f;
    if ((f = fopen("14.4.bin", "wb+")) == NULL) {
        printf("blad\n");
        return 0;
    }

    printf("n, wartosc: ");
    scanf("%d%lf", &n, &w);
    struct Pracownik pracownik, pracownicy[n];

    for (i = 0; i < n; i++) {
        printf("Imie, nazwisko, liczba godzin, stawka, premia w %%: ");
        wczytaj_dane(&pracownicy[i]);
        placa_do_pliku(pracownicy[i], f);
    }

    printf("\nPlace:\n");
    rewind(f);
    while (!feof(f)) {
        p = placa_z_pliku(f);
        printf("%.2lf\n", p);
    }

    printf("Dane osob, ktorych kwota do wyplaty przekracza %lf:\n", w);
    for (i = 0; i < n; i++)
        if (pracownicy[i].do_wyplaty > w)
            printf("imie: %s, nazwisko: %s, liczba godzin: %d, stawka: %.2lf, premia: %.2lf%%, do wyplaty: %.2lf\n", 
            pracownicy[i].imie, pracownicy[i].nazwisko, pracownicy[i].liczba_godzin, pracownicy[i].stawka,
            pracownicy[i].premia, pracownicy[i].do_wyplaty);

    if (fclose(f) != 0)
        printf("blad\n");
}


void placa_do_pliku(struct Pracownik p, FILE *f) {
    fprintf(f, "%lf\n", placa(p));
}

double placa_z_pliku(FILE *f) {
    double p;
    fscanf(f, "%lf\n", &p);
    return p;
}

void wczytaj_dane(struct Pracownik *p) {
    scanf("%s%s%d%lf%lf", p->imie, p->nazwisko, &p->liczba_godzin, &p->stawka, &p->premia);
    p->do_wyplaty = placa(*p);
}


double placa(struct Pracownik p) {
    return (p.liczba_godzin * p.stawka) * (1 + p.premia / 100);
}