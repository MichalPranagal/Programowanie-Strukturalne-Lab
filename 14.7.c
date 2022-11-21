#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void dodaj_losowa_liczbe(FILE*);
void odczytaj_liczby(FILE*);

int main() {
    FILE *f;
    int pos;
    char c;

    srand(time(NULL));
    if ((f = fopen("14.7.txt", "a+")) == NULL) {
        printf("blad\n");
        return 0;
    }

    dodaj_losowa_liczbe(f);
    odczytaj_liczby(f);

    printf("\npozycja: ");
    scanf("%d", &pos);

    fseek(f, pos, SEEK_SET);
    fscanf(f, "%c\n", &c);
    printf("%c\n", c);

    if(fclose(f) != 0)
        printf("blad\n");
}


void dodaj_losowa_liczbe(FILE *f) {
    fseek(f, 0, SEEK_END);
    fprintf(f, "%d\n", rand() % 1000000);
}

void odczytaj_liczby(FILE *f) {
    int l;
    rewind(f);
    while (!feof(f)) {
        fscanf(f, "%d\n", &l);
        printf("%d\n", l);
    }
}