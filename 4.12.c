#include <stdio.h>
#include <ctype.h>

void wypisanie(char);

int main() {
    printf("znak: ");
    char c = getchar();
    wypisanie(c);
}


void wypisanie(char c) {
    printf("znak: %c, kod ASCII: %d, znak o kodzie nastepnym: %c\n", c, c, c + 1);
    if ('a' <= c && c <= 'z')
        printf("duza litera: %c\n", toupper(c));

}