#include <stdio.h>
#include <ctype.h>

enum Stypendium {brak, normalne, podwyzszone};

struct Student {
    char imie[100], nazwisko[100];
    int oceny[6];
    double srednia;
    enum Stypendium stypendium;
};

void wczytywanieDanych(struct Student*);
void wyswietlanieDanych(struct Student);
enum Stypendium przyznanieStypendium(struct Student);
double sredniaOcen(struct Student);

int main() {
    int i, n;
    printf("n: ");
    scanf("%d", &n);
    struct Student studenci[n];

    for (i = 0; i < n; i++) {
        wczytywanieDanych(&studenci[i]);
        studenci[i].srednia = sredniaOcen(studenci[i]);
        studenci[i].stypendium = przyznanieStypendium(studenci[i]);
    }
    printf("Lista wszystkich studentow:\n");
    for (i = 0; i < n; i++)
        wyswietlanieDanych(studenci[i]);

    printf("Lista studentow z podwyzszonym stypendium:\n");
    for (i = 0; i < n; i++)
        if (studenci[i].stypendium == podwyzszone)
            wyswietlanieDanych(studenci[i]);

    printf("Lista studentow ze zwyklym stypendium:\n");
    for (i = 0; i < n; i++)
        if (studenci[i].stypendium == normalne)
            wyswietlanieDanych(studenci[i]);

}


void wczytywanieDanych(struct Student *student) {
    int i, o;
    char c;

    printf("imie, nazwisko, oceny: ");
    scanf("%s%s", student->imie, student->nazwisko);
    for (i = 2; i <= 5; i++)
        student->oceny[i] = 0;
    
    do {
        scanf("%d%c", &o, &c);
        student->oceny[o]++;
    } while (c != '\n');
}

void wyswietlanieDanych(struct Student student) {
    int i, j;
    printf("%s %s ", student.imie, student.nazwisko);
    for (i = 2; i <= 5; i++)
        for (j = 0; j < student.oceny[i]; j++)
            printf("%d ", i);
    printf(": %.2lf\n", student.srednia);
}

enum Stypendium przyznanieStypendium(struct Student student) {
    if (student.oceny[2] || student.oceny[3])
        return brak;
    else if (student.oceny[4])
        return normalne;
    else
        return podwyzszone;
}

double sredniaOcen(struct Student student) {
    int i, suma = 0, l_o = 0;
    for (i = 2; i <= 5; i++) {
        suma += student.oceny[i] * i;
        l_o += student.oceny[i];
    }

    return (double) suma / l_o;
}