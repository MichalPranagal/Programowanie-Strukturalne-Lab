#include <stdio.h>
#include <math.h>

double srednia_arytmetyczna(int, int);
double srednia_geometryczna(int, int);

int main() {
    int a = 6, b = 4;
    printf("srednia arytmetyczna(%d, %d): %lf\n", a, b, srednia_arytmetyczna(a, b));
    printf("srednia geometryczna(%d, %d): %lf\n", a, b, srednia_geometryczna(a, b));
}


double srednia_arytmetyczna(int a, int b) {
    return (double) (a + b) / 2;
}
double srednia_geometryczna(int a, int b) {
    return sqrt(a * b);
}