#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double sinx(double, int);

int main() {
    double x;
    int k;
    printf("x, k: ");
    scanf("%lf%d", &x, &k);
    printf("sin(%lf) = %lf\n", x, sinx(x, k));
}


void calc_silnia(int x, int sil[]) {
    int i;
    sil[0] = 1;

    for (i = 1; i <= x; i++)
        sil[i] = sil[i - 1] * i;

}

double sinx(double x, int k) {
    int i;
    double sum = 0, val;
    int sil[2 * k - 1];
    calc_silnia(2 * k - 1, sil);

    for (i = 0; i < k; i++) {
        val = pow(x, 1 + 2 * i) / sil[1 + 2 * i];
        if (i % 2 == 0)
            sum += val;
        else 
            sum -= val;
    }

    return sum;
}