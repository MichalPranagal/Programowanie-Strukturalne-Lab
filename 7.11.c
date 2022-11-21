#include <stdio.h>
#include <math.h>

int jest_automorficzna(int);
int jest_pierwsza(int);
int jest_pitragorejska(int, int, int);

int main() {
    int opt, m, n, i, a, b, c;

    do {
        printf("Wybierz opcje:\n");
        printf("1. Wyznacz liczby automorficzne\n");
        printf("2. Wyznacz liczby pierwsze\n");
        printf("3. Wyznacz liczby pitagorejskie\n");
        printf("0. Zakoncz\n");
        scanf("%d", &opt);

        if(opt == 0)    return 0;

        printf("Podaj przedzial\n");
        scanf("%d%d", &m, &n);

        switch (opt) {
            case 1:
                for (i = m; i <= n; i++)
                    if (jest_automorficzna(i))
                        printf("%d\n", i);
                break;

            case 2:
                for (i = m; i <= n; i++)
                    if (jest_pierwsza(i))
                        printf("%d\n", i);
                break;

            case 3:
                for (a = m; a <= n; a++)
                    for (b = a; b <= n; b++)
                        for (c = b; c <= n; c++)
                            if (jest_pitagorejska(a, b, c))
                                printf("%d, %d, %d\n", a, b, c);
                break;
            
            default:
                printf("Niepoprawna opcja\n");
                break;
        }
        printf("\n");
    } while (opt != 0);

}


int jest_automorficzna(int x) {
    int m = pow(10, ceil(log10(x + 1)));
    
    return x * x % m == x;
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

int jest_pitagorejska(int a, int b, int c) {
    return  (a * a + b * b == c * c);
}