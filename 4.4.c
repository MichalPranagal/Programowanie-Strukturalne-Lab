#include <stdio.h>
#include <math.h>

double v_szescian(double);
double p_szescian(double);
double v_prostopadloscian(double, double);
double p_prostopadloscian(double, double);
double v_walec(double, double);
double p_walec(double, double);

int main() {
    double a = 5, b = 7, r = 3, h = 4;

    printf("v szescianu: %lf\n", v_szescian(a));
    printf("p szescianu: %lf\n", p_szescian(a));
    printf("v prostopadloscianu: %lf\n", v_prostopadloscian(a, b));
    printf("p prostopadloscianu: %lf\n", p_prostopadloscian(a, b));
    printf("v walca: %lf\n", v_walec(h, r));
    printf("p walca: %lf\n", p_walec(h, r));
}


double v_szescian(double a) {
    return a * a * a;
}

double p_szescian(double a) {
    return 6 * a * a;
}

double v_prostopadloscian(double a, double h) {
    return a * a * h;
}

double p_prostopadloscian(double a, double h) {
    return 2 * a * a + 4 * a * h;
}

double v_walec(double h, double r) {
    return  M_PI * r * r * h;
}

double p_walec(double h, double r) {
    return 2 * M_PI * r * r + 2 * M_PI * r * h;
}