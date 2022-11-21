#include <stdio.h>

enum typ_nagrody {pieniadze, wycieczka, list};

struct Pracownik {
    char imie[30], nazwisko[30];
    enum typ_nagrody typ;
    int i;
    union {
        double kwota_pieniezna;
        char info[255];
    } dane;
};

void wczytaj_dane(struct Pracownik*);
void wyswietl_dane(struct Pracownik);

int main() {
    int n, i;
    printf("n: ");
    scanf("%d", &n);
    struct Pracownik pracownicy[n];

    for (i = 0; i < n; i++) 
        wczytaj_dane(&pracownicy[i]);

    printf("Przydzial nagrod:\n");
    for (i = 0; i < n; i++) 
        wyswietl_dane(pracownicy[i]);
}

void wczytaj_dane(struct Pracownik *p) {
    printf("Imie: ");
    scanf("%30s", p->imie);
    printf("Nazwisko: ");
    scanf("%30s", p->nazwisko);
    printf("Typ nagrody (0 - pieniadze, 1 - wycieczka, 2 - list pochwalny\n");
    scanf("%d", &p->typ);

    if (p->typ == pieniadze) {
        printf("Kwota pieniezna: ");
        scanf("%lf", &p->dane.kwota_pieniezna);
    } else if (p->typ == wycieczka) {
        printf("Dane dot. wycieczki: ");
        fgets(p->dane.info, 100, stdin);
    } else if (p->typ == list) {
        printf("Tresc listu");
        fgets(p->dane.info, 100, stdin);
    }
}
void wyswietl_dane(struct Pracownik p) {
    printf("\nImie: %s\n", p.imie);
    printf("Nazwisko: %s\n", p.nazwisko);
    printf("Nagroda: ");

    if (p.typ == pieniadze) {
        printf("kwota pieniezna: %lf\n", p.dane.kwota_pieniezna);
    } else if (p.typ == wycieczka) {
        printf("wycieczka: %s", p.dane.info);
    } else if (p.typ == list) {
        printf("list pochwalny: %s", p.dane.info);
    } else {
        printf("-\n");
    }
}