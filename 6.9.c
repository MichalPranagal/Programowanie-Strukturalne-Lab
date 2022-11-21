#include <stdio.h>

int czy_zdali(int);

int main() {
    int n = 5;
    if (czy_zdali(n))
        printf("TAK\n");
    else
        printf("NIE\n");
}


int czy_zdali(int n) {
    double ocena;
    while (n--) {
        scanf("%lf", &ocena);
        if (ocena < 3)
            return 0;
    }
    return 1;
}