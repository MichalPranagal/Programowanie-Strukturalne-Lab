#include <stdio.h>
#include <stdlib.h>

int ciag_arytmetyczny(int, double[]);

int main() {
    int n, i;
    printf("n: ");
    scanf("%d", &n);
    double liczby[n];

    for (i = 0; i < n; i++)
        scanf("%lf", &liczby[i]);

    if (ciag_arytmetyczny(n, liczby))
        printf("liczby tworza ciag arytmetyczny\n");
    else
        printf("liczby nie tworza ciagu arytmetycznego\n");
}


int ciag_arytmetyczny(int n, double liczby[]) {
    int i;
    if (n == 1)
        return 1;
    
    for (i = 2; i < n; i++)
        if (liczby[i] - liczby[i - 1] != liczby[1] - liczby[0])
            return 0;
    return 1;
}