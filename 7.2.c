#include <stdio.h>

void print_linia(int, char);

int main() {
    int len = 50;
    char znak = '*';
    print_linia(len, znak);
}


void print_linia(int len, char znak) {
    int i;
    for (i = 0; i < len; i++)
        printf("%c", znak);
    printf("\n");
}