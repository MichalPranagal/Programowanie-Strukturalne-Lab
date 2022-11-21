#include <stdio.h>

int main() {
    int wiek_lata, wiek_miesiace, okres_lata, okres_miesiace;
    printf("podaj wiek w latach i miesiacach: ");
    scanf("%d %d", &wiek_lata, &wiek_miesiace);
    printf("podaj okres w latach i miesiacach: ");
    scanf("%d %d", &okres_lata, &okres_miesiace);

    printf("wiek po %d latach i %d miesiacach: %d lat %d miesiecy",
    okres_lata, okres_miesiace, wiek_lata + okres_lata + (wiek_miesiace + okres_miesiace) / 12,
    (wiek_miesiace + okres_miesiace) % 12);
    
}