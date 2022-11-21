#include <stdio.h>

void koszt(double, int, double*, double*);

int main() {
    double cena_hurtowa, koszt_zamowienia, cena_sztuki;
    int sztuki;

    printf("cena hurtowa, ilosc sztuk: ");
    scanf("%lf%d", &cena_hurtowa, &sztuki);
    koszt(cena_hurtowa, sztuki, &koszt_zamowienia, &cena_sztuki);
    printf("koszt zamowienia: %.2lf, cena 1 sztuki: %.2lf\n", koszt_zamowienia, cena_sztuki);
}


void koszt(double cena_hurtowa, int sztuki, double *koszt_zamowienia, double *cena_sztuki) {
    *cena_sztuki = ((sztuki < 10) ? 1.2 : 1) * cena_hurtowa;
    *koszt_zamowienia = *cena_sztuki * sztuki;
}