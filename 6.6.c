#include <stdio.h>
#define SUM(a, b) (a + b)
#define SREDNIA(a, b) ((a + b) / 2)
#define MAX(a, b) (a > b ? a : b)

int main() {
    int opt;
    float a, b;

    do {
        printf("Wybierz opcje:\n");
        printf("1. Oblicz sume dwoch liczb\n");
        printf("2. Oblicz srednia dwoch liczb\n");
        printf("3. Oblicz max z dwoch liczb\n");
        printf("0. zakoncz program\n\n");
        scanf("%d", &opt);


        switch (opt) {
            case 0:
                return 0;
                break;
            case 1:
                printf("podaj dwie liczby: ");
                scanf("%lf %lf", &a, &b);
                printf("suma = %lf\n\n", SUM(a, b));
                break;
            case 2:
                printf("podaj dwie liczby: ");
                scanf("%lf%lf", &a, &b);
                printf("srednia = %lf\n\n", SREDNIA(a, b));
                break;
            case 3:
                printf("podaj dwie liczby: ");
                scanf("%lf%lf", &a, &b);
                printf("max = %lf\n\n", MAX(a, b));
                break;
            default:
                printf("blad, wybierz opcje 1, 2, 3, lub 0 aby wyjsc\n\n");
                break;
        }
    } while (opt != 0);
}