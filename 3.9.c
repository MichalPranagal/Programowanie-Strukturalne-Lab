#include <stdio.h>
#include <math.h>
#define DEG (M_PI / 180)

int main() {
    printf("%24d %26d %25d\n", 90, 120, 180);
    printf("sin: %25lf %25lf %25lf\n", sin(90 * DEG), sin(120 * DEG), sin(180 * DEG));
    printf("cos: %25lf %25lf %25lf\n", cos(90 * DEG), cos(120 * DEG), cos(180 * DEG));
    printf("tg:  %25lf %25lf %25lf\n", tan(90 * DEG), tan(120 * DEG), tan(180 * DEG));
}
