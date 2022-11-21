#include <stdio.h>

struct Student {
    char imie[30], nazwisko[30];
    float oceny[5];
};

void wczytaj_dane(struct Student*);
float srednia(struct Student);

int main() {
    int i, n;
    float sum = 0, s;
    printf("n: ");
    scanf("%d", &n);
    struct Student studenci[n];

    for (i = 0; i < n; i++)
        wczytaj_dane(&studenci[i]);
    
    for (i = 0; i < n; i++) {
        s = srednia(studenci[i]);
        sum += s;
        printf("srednia studenta #%d: %f\n", i + 1, s);
    }
    printf("srednia grupy: %f\n", sum / n);
}

void wczytaj_dane(struct Student *s) {
    int i;
    printf("Imie: ");
    scanf("%30s", s->imie);
    printf("Nazwisko: ");
    scanf("%30s", s->nazwisko);

    printf("Oceny: ");
    for (i = 0; i < 5; i++)
        scanf("%f", &s->oceny[i]);
}

float srednia(struct Student s) {
    int i;
    float sum = 0;

    for (i = 0; i < 5; i++)
        sum += s.oceny[i];
    
    return sum / 5;
}