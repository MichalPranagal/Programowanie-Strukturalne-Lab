#include <stdio.h>
#include <math.h>

int main() {
    double x = 0;

    printf("%lf\n", 10 * cos(x) - 0.1 * x * x + sin(x) + sqrt(4 * x * x + 7));
    printf("%lf\n", log(x + 5) + exp(x + 1) - fabs(tan(x) + 1));
    printf("%lf\n", (pow(sin(x), 2) + 0.5) / (pow(cos(x), 4) + (pow(tan(pow(x, 2)), 4))));
    printf("%lf\n", sqrt(fabs(5 * sin(pow(x, 2)) + 1) / 3.5 * pow((sin(x) + cos(x)), 2)));
}
