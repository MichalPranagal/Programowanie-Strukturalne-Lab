#include <stdio.h>

int main() {
    int n = 200, a, b, c;

    for (a = 0; a < n; a++)
        for (b = a; b < n; b++)
            for (c = b; c < n; c++)
                if (a * a + b * b == c * c)
                    printf("%d^2 + %d^2 == %d^2\n", a, b, c);
    printf("\n");

    for (a = n - 1; a >= 0; a--)
        for (b = n - 1; b >= a; b--)
            for (c = n - 1; c >= b; c--)
                if (a * a + b * b == c * c)
                    printf("%d^2 + %d^2 == %d^2\n", a, b, c);
}