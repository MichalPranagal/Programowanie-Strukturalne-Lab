#include <stdio.h>
#include <string.h>

void wyrownaj_l(int, char*[]);
void wyrownaj_r(int, char*[]);

int main() {
    char *wiersz[] = {
        "Stoi na stacji lokomotywa,",
        "Ciężka, ogromna i pot z niej spływa:",
        "Tłusta oliwa.",
        "Stoi i sapie, dyszy i dmucha,",
        "Żar z rozgrzanego jej brzucha bucha:",
        "Buch - jak gorąco!",
        "Uch - jak gorąco!"
    };

    wyrownaj_l(7, wiersz);
    wyrownaj_r(7, wiersz);
}

void wyrownaj_l(int n, char *str[]) {
    int i;
    for (i = 0; i < n; i++)
        printf("%-80s\n", str[i]);
}

void wyrownaj_r(int n, char *str[]) {
    int i, j, l;
    for (i = 0; i < n; i++)
        printf("%80s\n", str[i]);
}