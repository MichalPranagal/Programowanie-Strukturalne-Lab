#include <stdio.h>

void wyplata(double, double, double*);

int main() {
    double x, p1, p2, w1, w2;
    do {
        printf("p1, p2 (p1 < p2): ");
        scanf("%lf%lf", &p1, &p2);
    } while (p1 >= p2);

    printf("x: ");
    scanf("%lf", &x);

    wyplata(x, p1, &w1);
    wyplata(x, p2, &w2);

    printf("wyplata po roku z lokaty polrocznej: %.2lf\n", w1);
    printf("wyplata po roku z lokaty rocznej: %.2lf\n", w2);
}


void wyplata(double x, double p, double *w) {
    *w = x * (1 + p / 100);
}