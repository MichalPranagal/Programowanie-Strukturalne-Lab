#include <stdio.h>

void wyswielt_ascii();

int main() {
    wyswielt_ascii();
}


void wyswielt_ascii() {
    char c;
    for (c = 'A'; c <= 'Z'; c++)
        printf("%c -> %d    %c -> %d\n", c, c, c + 'a' - 'A', c + 'a' - 'A');
}