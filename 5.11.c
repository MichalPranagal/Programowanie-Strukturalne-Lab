#include <stdio.h>

int fun(int, int, int);

int main() {
    int a = 1, b = 3, c = 4;
    printf("%d\n", fun(a, b, c));
}


int fun(int a, int b, int c) {
    if (a % 2 == 0 &&
        b % 2 == 0 &&
        c % 2 == 0)
        return a + b + c;
    
    if (a == 1 || b == 1 || c == 1)
        return a * b * c;

    return -1;
}