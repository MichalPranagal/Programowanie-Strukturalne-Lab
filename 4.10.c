#include <stdio.h>

void swap(int*, int*);

int reverse(int val) {
    int d1 = val % 10,
        d2 = val / 10 % 10,
        d3 = val / 100;

    return d1 * 100 + d2 * 10 + d3;
}

int main() {
    int a = 123, b = 456;
    swap(&a, &b);
    printf("a = %d, b = %d\n", a, b);
    a = reverse(a), b = reverse(b);
    printf("a = %d, b = %d\n", a, b);
}


void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}