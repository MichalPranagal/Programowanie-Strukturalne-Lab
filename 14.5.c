#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Ksiazka {
    char autor[100], tytul[100];
};

int zapisz_pozycje(FILE*);
void wypisz_ksiazki(char*, FILE*);

int main() {
    struct Ksiazka ksiazka;
    FILE *f;
    int wczytywanie;
    char *szukany_autor = malloc(100);

    if ((f = fopen("14.5.bin", "wb+")) == NULL) {
        printf("blad\n");
        return 0;
    }

    do {
        wczytywanie = zapisz_pozycje(f);
    } while (wczytywanie);

    printf("szukany autor: ");
    fgets(szukany_autor, 100, stdin);
    wypisz_ksiazki(szukany_autor, f);

    if (fclose(f) != 0)
        printf("blad\n");
}

int zapisz_pozycje(FILE *f) {
    int wczytywanie;
    struct Ksiazka k;

    printf("Autor: ");
    fgets(k.autor, 100, stdin);
    if (!(wczytywanie = strcmp("*\n", k.autor)))
        return 0;
    printf("Tytul: ");
    fgets(k.tytul, 100, stdin);

    fwrite(&k, sizeof(struct Ksiazka), 1, f);
    return 1;
}

void wypisz_ksiazki(char *szukany_autor, FILE *f) {
    struct Ksiazka k;
    rewind(f);
    while (fread(&k, sizeof(struct Ksiazka), 1, f)) {
        if (!strcmp(szukany_autor, k.autor))
            printf("%s", k.tytul);
    }
}
