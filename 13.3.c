#include <stdio.h>

struct Pracownik {
    char imie[30], nazwisko[30];
    int liczba_godzin;
    double stawka, premia;
};

void wczytaj_dane(struct Pracownik*);
void wyswietl_dane(struct Pracownik);
double placa(struct Pracownik);

int main() {
    struct Pracownik pracownik;
    wczytaj_dane(&pracownik);
    wyswietl_dane(pracownik);
    printf("Placa: %.2lf\n", placa(pracownik));
}

void wczytaj_dane(struct Pracownik *p) {
    printf("Imie:"); 
    scanf("%s", p->imie);
    printf("Nazwisko: ");
    scanf("%s", p->nazwisko);
    printf("Liczba godzin: ");
    scanf("%d", &p->liczba_godzin);
    printf("Stawka: ");
    scanf("%lf", &p->stawka);
    printf("Premia: ");
    scanf("%lf", &p->premia);
}

void wyswietl_dane(struct Pracownik p) {
    printf("Imie: %s\n", p.imie);
    printf("Nazwisko: %s\n", p.nazwisko);
    printf("Liczba godzin: %d\n", p.liczba_godzin);
    printf("Stawka: %.2lf\n", p.stawka);
    printf("Premia: %.2lf\n", p.premia);
}

double placa(struct Pracownik p) {
    return (p.liczba_godzin * p.stawka) * (1 + p.premia / 100);
}