#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* zaszyfruj(char*);
char* odszyfruj(char*);

int main() {
    char *str = (char*) malloc(101 * sizeof(char));
    char *zas = (char*) malloc(101 * sizeof(char));
    char *ods = (char*) malloc(101 * sizeof(char));

    fgets(str, 100, stdin);
    zas = zaszyfruj(str);
    ods = odszyfruj(zas);

    printf("zaszyfrowany tekst: %s\nodszyfrowany tekst: %s\n", zas, ods);

    free(str);
    free(zas);
    free(ods);
}


char* zaszyfruj(char *str) {
    int i, len = strlen(str);
    char *zas = (char*) malloc(len * sizeof(char));

    for (i = 0; i < len; i++)
        zas[i] = (str[i] + 3) % 128;
    
    return zas;
}

char* odszyfruj(char *str) {
    int i, len = strlen(str);
    char *ods = (char*) malloc(len * sizeof(char));

    for (i = 0; i < len; i++)
        ods[i] = (str[i] - 3 + 128) % 128;
    
    return ods;
}