#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define MIN(a, b) ((a < b) ? a : b)

int main() {
    int i, n;
    double min_czas = __DBL_MAX__;
    double *czas;
    printf("n: ");
    scanf("%d", &n);
    czas = (double*) malloc(n * sizeof(double));

    for (i = 0; i < n; i++) {
        scanf("%lf", &czas[i]);
        min_czas = MIN(min_czas, czas[i]);
    }

    printf("najlepszy czas: %lf\nNr zawodnikow z tym czasem:\n", min_czas);
    for (i = 0; i < n; i++)
        if (czas[i] == min_czas)
            printf("%d\n", i);

    free(czas);
}
