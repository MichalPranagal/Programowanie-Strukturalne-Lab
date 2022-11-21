#include <stdio.h>

int main() {
    int a = 123, b = 456;
    int a1, a2, a3, b1, b2, b3;
    int temp = a;
    a = b;
    b = temp;

    printf("a = %d, b = %d\n", a, b);

    a1 = a % 10,
    a2 = a / 10 % 10,
    a3 = a / 100;
    a = a1 * 100 + a2 * 10 + a3;

    b1 = b % 10,
    b2 = b / 10 % 10,
    b3 = b / 100;
    b = b1 * 100 + b2 * 10 + b3;

    printf("a = %d, b = %d\n", a, b);
}
