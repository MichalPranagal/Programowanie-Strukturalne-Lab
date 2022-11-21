#include <stdio.h>

void suma_roznica(int*, int*);

int main() {
    int a = 5, b = 3;
    printf("przed wywolaniem: a = %d, b = %d\n", a, b);
    suma_roznica(&a, &b);
    printf("po wywolaniu: a = %d, b = %d\n", a, b);
}


void suma_roznica(int *a, int *b) {
    int at = *a, bt = *b;
    *a = at + bt;
    *b = at - bt;
}