#include <stdio.h>
#include <math.h>

int main() {
    int a = 6, b = 4;
    printf("srednia arytmetyczna(%d, %d): %f\n", a, b, (double) (a + b) / 2);
    printf("srednia geometryczna(%d, %d): %f\n", a, b, sqrt(a * b));
}