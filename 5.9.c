#include <stdio.h>

double wyplata(int, int);

int main() {
    int pensja = 10000, staz = 7;
    printf("wyplata: %.2f\n", wyplata(pensja, staz));
}


double wyplata(int pensja, int staz) {
    if (staz < 5)
        return pensja;
    else if (staz <= 10)
        return pensja * (1 + staz / 100.);
    else
        return pensja * 1.15;
}