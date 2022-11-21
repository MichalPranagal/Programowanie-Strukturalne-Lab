#include <stdio.h>

double sredniaWhile(int, int[]);
double sredniaDoWhile(int, int[]);

int main() {
    int liczby[] = {3, 4, 5, 9, 3};
    int n = sizeof(liczby) / sizeof(liczby[0]);

    printf("%lf\n", sredniaWhile(n, liczby));
    printf("%lf\n", sredniaDoWhile(n, liczby));
}


double sredniaWhile(int n, int liczby[]) {
    double suma = 0;
    int i = n;

    if (n == 0)
        return 0;

    while (i--) 
        suma += liczby[i];
    return suma / n;
}

double sredniaDoWhile(int n, int liczby[]) {
    double suma = 0;
    int i = n;

    if (n == 0)
        return 0;

    do {
        suma += liczby[--i];
    } while (i);

    return suma / n;
}
