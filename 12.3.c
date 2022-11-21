#include <stdio.h>
#include <string.h>

void wysrodkuj(char*);

int main() {
    char imie_m[] = "Michal Pranagal";
    char imie_k[80];
    printf("imie kolegi: ");
    gets(imie_k); 

    wysrodkuj("Programowanie Strukturalne");
    wysrodkuj(imie_m);
    wysrodkuj(imie_k);
}

void wysrodkuj(char *str) {
    int i, len = strlen(str);

    for (i = 0; i < (80 - len) / 2; i++)
        printf(" ");
    printf("%s\n", str);
}