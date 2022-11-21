#include <stdio.h>

int nalezy(double, double);

int main() {
    double x1 = 0, y1 = 3, x2 = -0.5, y2 = 1;

    if (nalezy(x1, y1))
        printf("punkt(%lf, %lf) nalezy do obszaru\n", x1, y1);
    else
        printf("punkt(%lf, %lf) nie nalezy do obszaru\n", x1, y1);

    if (nalezy(x2, y2))
        printf("punkt(%lf, %lf) nalezy do obszaru\n", x2, y2);
    else
        printf("punkt(%lf, %lf) nie nalezy do obszaru\n", x2, y2);
}


int nalezy(double x, double y) {
    if (-1 <= x && x <= 1 && 
        -1 <= y && y <= 1)
        return 1;
    else
        return 0;
}