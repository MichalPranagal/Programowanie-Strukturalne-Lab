#include <stdio.h>
#include <stdlib.h>
#define STATUS "student"
#define SREDNIA 5.

int main() {
    int wiek;
    char plec, imie[100], nazwisko[100];

    printf("Podaj imie, nazwisko, wiek, plec (m/f): ");
    scanf("%s%s%d %c", imie, nazwisko, &wiek, &plec);
    printf("imie: %s, nazwisko: %s, wiek: %d, plec: %c\n", imie, nazwisko, wiek, plec); 
    printf("status: %s, srednia: %lf\n", STATUS, SREDNIA);

}