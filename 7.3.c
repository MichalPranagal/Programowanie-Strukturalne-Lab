#include <stdio.h>

double srednia_parzystych(int);

int main() {
    int n;
    printf("n: ");
    scanf("%d", &n);
    printf("%lf\n", srednia_parzystych(n));
}


double srednia_parzystych(int n) {
    int i, x, l_p = 0;
    double suma = 0;

    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        if (x % 2 == 0) {
            suma += x;
            l_p++;
        }
    }
    
    return (l_p > 0) ? suma / l_p : 0;
}