#include <stdio.h>

double mile_to_km(double);
double km_to_mile(double);
double hp_to_w(double);
double kmph_to_mps(double);
double fahrenheit_to_celsius(double);

int main() {
    double mile = 6, km = 16, hp = 500, kmph = 54, fahrenheit = 66.2;
    printf("%lf mil = %lf km\n", mile, mile_to_km(mile));
    printf("%lf km = %lf mil\n", km, km_to_mile(km));
    printf("%lf koni mechanicznych = %lf W\n", hp, hp_to_w(hp));
    printf("%lf km/h = %lf m/s\n", kmph, kmph_to_mps(kmph));
    printf("%lf F = %lf C\n", fahrenheit, fahrenheit_to_celsius(fahrenheit));
}


double mile_to_km(double mile) {
    return mile / 0.625;
}

double km_to_mile(double km) {
    return km / 1.6;
}

double hp_to_w(double hp) {
    return hp * 735;
}

double kmph_to_mps(double kmph) {
    return kmph / 3.6;
}

double fahrenheit_to_celsius(double fahrenheit) {
    return 5. / 9 * (fahrenheit - 32);
}