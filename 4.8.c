#include <stdio.h>
#include <math.h>

double exp_e(double);
double exp_f(double);
double exp_g(double);
double exp_h(double);

int main() {
    double x = 0;

    printf("%lf\n", exp_e(x));
    printf("%lf\n", exp_f(x));
    printf("%lf\n", exp_g(x));
    printf("%lf\n", exp_h(x));
}


double exp_e(double x) {
    return 10 * cos(x) - 0.1 * x * x + sin(x) + sqrt(4 * x * x + 7);
}

double exp_f(double x) {
    return log(x + 5) + exp(x + 1) - fabs(tan(x) + 1);
}

double exp_g(double a) {
    return (pow(sin(a), 2) + 0.5) / (pow(cos(a), 4) + (pow(tan(pow(a, 2)), 4)));
}

double exp_h(double b) {
    return sqrt(fabs(5 * sin(pow(b, 2)) + 1) / 3.5 * pow((sin(b) + cos(b)), 2));
}