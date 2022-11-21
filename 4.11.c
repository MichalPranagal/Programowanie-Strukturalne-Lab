#include <stdio.h>
#include <math.h>

double obwod(double, double, double, double);

int main() {
    double x1 = 5, y1 = 3,
           x2 = 8, y2 = 15;

    printf("Obwod okregu: %lf\n", obwod(x1, y1, x2, y2));
}


double obwod(double x1, double y1, double x2, double y2) {
    return sqrt(pow((x2 - x1), 2)  + pow((y2 - y1), 2)) *  2 * M_PI;
}