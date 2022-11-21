#include <stdio.h>
#include <math.h>

void liczby_sumy_szescianow();

int main() {
    liczby_sumy_szescianow();
}


int rowna_sumie_szescianow(int x) {
    int sum = pow(x % 10, 3)
            + pow(x / 10 % 10, 3)
            + pow(x / 100, 3);
    
    return sum == x;
}

void liczby_sumy_szescianow() {
    int i;

    for (i = 100; i < 1000; i++)
        if (rowna_sumie_szescianow(i))
            printf("%d\n", i);
}