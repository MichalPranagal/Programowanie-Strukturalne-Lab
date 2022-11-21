#include <stdio.h>

int iloczyn(int *wynik);

int main() {
    int *wynik;
    
    if (iloczyn(wynik))
        printf("%d\n", *wynik);
    else
        printf("brak liczb z przedzialu <1,100>\n");
}


int iloczyn(int *wynik) {
    int n, l, i, wystapienie = 0;
    *wynik = 1;
    printf("n: ");
    scanf("%d", &n);

    printf("n liczb: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &l);
        if (1 <= l && l <= 100) {
            *wynik *= l;
            wystapienie = 1;
        }
    }

    return wystapienie;
}