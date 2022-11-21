#include <stdio.h>

int main() {
    double mile = 6, km = 16, hp = 500, kmph = 54, fahrenheit = 66.2;
    printf("%lf mil = %lf km\n", mile, mile / 0.625);
    printf("%lf km = %lf mil\n", km, km / 1.6);
    printf("%lf koni mechanicznych = %lf W\n", hp, hp * 735);
    printf("%lf km/h = %lf m/s\n", kmph, kmph / 3.6);
    printf("%lf F = %lf C\n", fahrenheit, 5. / 9 * (fahrenheit - 32));
}