#include <stdio.h>

void swap(int*, int*);

int main() {
    int a = 5, b = 3;
    printf("przed zamiana: a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("po zamianie: a = %d, b = %d\n", a, b);
}


void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}