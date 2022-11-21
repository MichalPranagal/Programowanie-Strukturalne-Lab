#include <stdio.h>

void wyswietl_liste(int n);

int main() {
    int n = 15;
    wyswietl_liste(n);
}


void wyswietl_liste(int n) {
    int i = 1;

    while (i <= n / 2) {
        if (i == 13) {
            i++;
            continue;
        }
        printf("%-12d%s    parter\n", i, (i % 2 == 1) ? "jednoosobowy" : "dwuosobowy  ");
        i++;
    }

    while (i <= n) {
        if (i == 13) {
            i++;
            continue;
        }
        printf("%-12d%s    I pietro\n", i, (i % 2 == 1) ? "jednoosobowy" : "dwuosobowy  ");
        i++;
    }

}