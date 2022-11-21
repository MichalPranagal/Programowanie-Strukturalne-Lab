#include <stdio.h>
#include <string.h>

void zakoncz_gdy_quit();

int main() {
    zakoncz_gdy_quit();
}

void zakoncz_gdy_quit() {
    int lic = -1;
    char str[100];

    do {
        fgets(str, 100, stdin);
        lic++;
    } while (strcmp("quit\n", str));

    printf("wprowadzonych napisow: %d\n", lic);
}