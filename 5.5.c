#include <stdio.h>
#include <math.h>

void rownanie_kwadratowe(double, double, double);

int main() {
    double a = 2, b = -10, c = 12;
    rownanie_kwadratowe(a, b, c);
}


void rownanie_kwadratowe(double a, double b, double c) {
    double x1, x2, delta = b * b - 4 * a * c;

    if (delta < 0)
        printf("brak pierwiastkow rzeczywistych\n");
    else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("jeden pierwiastek podwojny: %lf\n", x1);
    }
    else {
        x1 = (-b - sqrt(delta)) / (2 * a);
        x2 = (-b + sqrt(delta)) / (2 * a);
        printf("dwa pierwiastki: %lf, %lf\n", x1, x2);
    }
}
