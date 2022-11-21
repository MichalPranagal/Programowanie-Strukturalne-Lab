#include <stdio.h>
#include <ctype.h>
#include <string.h>

void reverse(char[]);
void to_upper(char[]);
void wysrodkuj(char[]);

int main() {
    char str[100];
    gets(str);
    reverse(str);
    to_upper(str);
    wysrodkuj(str);
}


void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

void reverse(char str[]) {
    int i, l = strlen(str);
    char temp;
    for(i = 0; i < l / 2; i++)
        swap(&str[i], &str[l - 1 - i]);
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