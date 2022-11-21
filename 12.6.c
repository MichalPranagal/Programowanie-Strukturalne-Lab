#include <stdio.h>
#include <ctype.h>
#include <string.h>

void to_upper(char[]);
void wysrodkuj(char[]);

int main() {
    char str[100];
    fgets(str, 100, stdin);
    to_upper(str);
    wysrodkuj(str);
}

void to_upper(char str[]) {
    int i, l = strlen(str);
    for (i = 0; i < l; i++)
        str[i] = toupper(str[i]);
}

void wysrodkuj(char str[]) {
    int i, len = strlen(str);

    for (i = 0; i < (80 - len) / 2; i++)
        printf(" ");
    printf("%s\n", str);
}