#include <stdio.h>
#include <stdlib.h>
#define STATUS "student"
#define SREDNIA 5.

void wczytaj_dane(char[], char[], int*, char*);
void wypisz_dane(char[], char[], int, char);

int main() {
    char plec, imie[100], nazwisko[100];
    int wiek;
    wczytaj_dane(imie, nazwisko, &wiek, &plec);
    wypisz_dane(imie, nazwisko, wiek, plec);
}


void wczytaj_dane(char imie[], char nazwisko[], int *wiek, char *plec) {
    printf("Podaj imie, nazwisko, wiek, plec (m/f): ");
    scanf("%s%s%d %c", imie, nazwisko, wiek, plec);
}

void wypisz_dane(char imie[], char nazwisko[], int wiek, char plec) {
    printf("imie: %s, nazwisko: %s, wiek: %d, plec: %c\n", imie, nazwisko, wiek, plec);
    printf("status: %s, srednia: %lf\n", STATUS, SREDNIA);
}