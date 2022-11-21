#include <stdio.h>

void liczby(int*, int*);

int main() {
    int n_dodatnich, n_0;
    liczby(&n_dodatnich, &n_0);
    printf("liczb dodatnich: %d, liczb = 0: %d\n", n_dodatnich, n_0);
}


void liczby(int *n_dodatnich, int *n_0) {
    int n, i, l;
    *n_dodatnich = 0;
    *n_0 = 0;
    printf("n: ");
    scanf("%d", &n);

    printf("n liczb: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &l);
        if (l > 0)
            (*n_dodatnich)++;
        else if (l == 0)
            (*n_0)++;
    }
}