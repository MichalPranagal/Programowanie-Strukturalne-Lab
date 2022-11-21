#include <stdio.h>
#include <math.h>

double funkcja1(int);
double funkcja2(int);

int main() {
    int t = 4;
    printf("%lf %lf\n", funkcja1(t), funkcja2(t));
}


double funkcja1(int a) {
    if (a == 0 || a == 1 || a == 2 || a == 3)
        return (1 + cos(a)) / 2;
    else if (a == 4 || a == 6 || a == 7)
        return sqrt(a * a + 1);
    else if (a == 8)
        return 1 - sin(a);
    else 
        return -1;
} 
double funkcja2(int a) {
    switch (a) {
        case 0:
        case 1:
        case 2:
        case 3:
            return (1 + cos(a)) / 2;
            break;
        case 4:
        case 6:
        case 7:
            return sqrt(a * a + 1);
            break;
        case 8:
            return 1 - sin(a);
            break;
        default:
            return -1;
            break;
    }
}