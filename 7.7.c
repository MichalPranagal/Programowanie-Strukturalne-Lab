#include <stdio.h>

int silnia_r(int x);
int silnia(int x);

int main() {
    int x = 9;
    printf("silnia (rekurencyjnie) = %d\n", silnia_r(x));
    printf("silnia (nierekurencyjnie) = %d\n", silnia(x));
}


int silnia_r(int x) {
    if (x == 0)
        return 1;
    return x * silnia_r(x - 1);
}

int silnia(int x) {
    int sil = 1, i;

    for (i = 2; i <= x; i++)
        sil *= i;
    
    return sil;
}