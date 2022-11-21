#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Pracownik {
    char imie[30], nazwisko[30];
    int liczba_godzin;
    double stawka, premia;
};

void wczytaj_dane(struct Pracownik*);
int placa(struct Pracownik);
int cmp(const void*, const void*);

int main() {
    int n, i;
    int p, p0, suma_plac = 0;
    printf("n: ");
    scanf("%d", &n);
    struct Pracownik pracownicy[n];

    for (i = 0; i < n; i++)
        wczytaj_dane(&pracownicy[i]);

    printf("Lista plac:\n");
    for (i = 0; i < n; i++) {
        p = placa(pracownicy[i]);
        suma_plac += p;
        printf("%s %s: %.2lf\n", pracownicy[i].imie, pracownicy[i].nazwisko, p / 100.);
    }
    printf("\nSuma plac: %.2lf\n\n", suma_plac / 100.);

    qsort(pracownicy, n, sizeof(struct Pracownik), cmp);
    printf("Nazwiska zarabiajacych najwiecej:\n");
    i = 0, p0 = placa(pracownicy[0]);

    while(placa(pracownicy[i]) == p0)
        printf("%s\n", pracownicy[i++].nazwisko);
}

void wczytaj_dane(struct Pracownik *p) {
    printf("Imie: ");
    scanf("%s", p->imie);
    printf("Nazwisko: ");
    scanf("%s", p->nazwisko);
    printf("Liczba godzin: ");
    scanf("%d", &p->liczba_godzin);
    printf("Stawka: ");
    scanf("%lf", &p->stawka);
    printf("Premia: ");
    scanf("%lf", &p->premia);
    printf("\n");
}

int placa(struct Pracownik p) {
    return (int) ((p.liczba_godzin * p.stawka) * (1 + p.premia / 100) * 100);
}

int cmp(const void *p1, const void *p2) {
    return placa(*(struct Pracownik*) p2) - placa(*(struct Pracownik*) p1);
}
