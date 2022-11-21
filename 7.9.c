#include <stdio.h>

int jest_pierwsza(int);

int main() {
    int n = 20, i, p = 0;

    printf("Liczby pierwsze rosnaco: ");
    for (i = 1; p < n; i++) {
        if (jest_pierwsza(i)) {
            p++;
            printf("%d ", i);
        }
    }

    printf("\nLiczb niepierwszych: %d\n", i - 1 - p);
    printf("Liczby pierwsze malejaco: ");
    for (; i > 0; i--) 
        if (jest_pierwsza(i))
            printf("%d ", i);
    printf("\n");

}


int jest_pierwsza(int x) {
    int i;
    if (x == 1)
        return 0;
    
    for (i = 2; i * i <= x; i++)
        if (x % i == 0)
            return 0;
    
    return 1;
}