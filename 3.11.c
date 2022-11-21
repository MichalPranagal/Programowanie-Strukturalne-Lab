#include <stdio.h>
#include <math.h>

int main() {
    double x1 = 5, y1 = 3,
           x2 = 8, y2 = 15;

    printf("Obwod okregu: %lf\n", sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2)) *  2 * M_PI);
}
