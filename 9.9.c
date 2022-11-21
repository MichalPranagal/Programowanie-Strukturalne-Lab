#include <stdio.h>

int uklad_rownan(double, double, double, double, double, double, double*, double*);

int main() {
    double a1, a2, b1, b2, c1, c2, x, y;
    int wynik;
    printf("a1, b1, c1: ");
    scanf("%lf%lf%lf", &a1, &b1, &c1);
    printf("a2, b2, c2: ");
    scanf("%lf%lf%lf", &a2, &b2, &c2);

    wynik = uklad_rownan(a1, b1, c1, a2, b2, c2, &x, &y);

    switch (wynik) {
        case 1:
            printf("rozwiazanie ukladu: x = %lf, y = %lf\n", x, y);
            break;
        case 0:
            printf("uklad jest nieoznaczony\n");
            break;
        case -1:
            printf("uklad jest sprzeczny\n");
            break;
    }
}


int uklad_rownan(double a1, double b1, double c1, double a2, double b2, double c2, double *x, double *y) {
    double w, wx, wy;
    w = a1 * b2 - a2 * b1;
    wx = c1 * b2 - c2 * b1;
    wy = a1 * c2 - a2 * c1;

    if (w == 0 && wx == 0 && wy == 0) 
        return 0;
    else if (w == 0 && (wx != 0 || wy != 0))
        return -1;
    else  {
        *x = wx / w;
        *y = wy / w;
        return 1;
    }
}