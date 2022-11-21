#include <stdio.h>
#include <math.h>
#define DEG (M_PI / 180)

double sindeg(double);
double cosdeg(double);
double tandeg(double);

int main() {
    printf("%24d %26d %25d\n", 90, 120, 180);
    printf("sin: %25lf %25lf %25lf\n", sindeg(90), sindeg(120), sindeg(180));
    printf("cos: %25lf %25lf %25lf\n", cosdeg(90), cosdeg(120), cosdeg(180));
    printf("tg:  %25lf %25lf %25lf\n", tandeg(90), tandeg(120), tandeg(180));
}


double sindeg(double x) {
    return sin(x * DEG);
}

double cosdeg(double x) {
    return cos(x * DEG);
}

double tandeg(double x) {
    return tan(x * DEG);
}
