#include <stdio.h>
#include <math.h>

int main() {
    double a = 5, b = 7, r = 3, h = 4;

    printf("v szescianu: %lf\n", a * a * a);
    printf("p szescianu: %lf\n", 6 * a * a);
    printf("v prostopadloscianu: %lf\n", a * a * b);
    printf("p prostopadloscianu: %lf\n", 2 * a * a + 4 * a * b);
    printf("v walca: %lf\n", M_PI * r * r * h);
    printf("p walca: %lf\n", 2 * M_PI * r * r + 2 * M_PI * r * h);
}