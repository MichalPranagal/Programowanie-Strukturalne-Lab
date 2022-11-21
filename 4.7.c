#include <stdio.h>

int lata(int, int, int, int);
int miesiace(int, int);

int main() {
    int wiek_lata, wiek_miesiace, okres_lata, okres_miesiace;
    printf("podaj wiek w latach i miesiacach: ");
    scanf("%d %d", &wiek_lata, &wiek_miesiace);
    printf("podaj okres w latach i miesiacach: ");
    scanf("%d %d", &okres_lata, &okres_miesiace);

    printf("wiek po %d latach i %d miesiacach: %d lat %d miesiecy\n", okres_lata, okres_miesiace,
    lata(wiek_lata, wiek_miesiace, okres_lata, okres_miesiace),
    miesiace(wiek_miesiace, okres_miesiace));
    
}


int lata(int wiek_lata, int wiek_miesiace, int okres_lata, int okres_miesiace) {
    return wiek_lata + okres_lata + (wiek_miesiace + okres_miesiace) / 12;
}
int miesiace(int wiek_miesiace, int okres_miesiace) {
    return (wiek_miesiace + okres_miesiace) % 12;
}