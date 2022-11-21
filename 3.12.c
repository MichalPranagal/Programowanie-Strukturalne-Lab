#include <stdio.h>

int main() {
    printf("znak: ");
    char c = getchar();
    printf("znak: %c, kod ASCII: %d, znak o kodzie nastepnym: %c\n", c, c, c + 1);
    if ('a' <= c && c <= 'z')
        printf("duza litera: %c\n", c - 'a' + 'A');
}
