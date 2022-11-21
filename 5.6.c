#include <stdio.h>
#include <math.h>

int tworza_trojkat(double, double, double);
double pole(double, double, double);

int main() {
    double a = 3, b = 4, c = 5;

    if (!tworza_trojkat(a, b, c))
        printf("podane liczby nie utworza trojkata\n");
    else
        printf("pole trojkata o bokach %lf, %lf, %lf = %lf\n", a, b, c, pole(a, b, c));
}


int tworza_trojkat(double a, double b, double c) {
    if (a <= 0 || b <= 0 || c <= 0 ||
        a + b <= c ||
        a + c <= b ||
        b + c <= a)
        return 0;
    else
        return 1;
}

double pole(double a, double b, double c) {
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}