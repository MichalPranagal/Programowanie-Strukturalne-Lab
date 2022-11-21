#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void wysrodkuj(char*);
void wyrownaj_l(int, char*[]);
void wyrownaj_r(int, char*[]);
void to_upper(char[]);
void zakoncz_gdy_quit();
void sortStr(int, char*[]);
char* zaszyfruj(char*);
char* odszyfruj(char*);


void wysrodkuj(char *str) {
    int i, len = strlen(str);

    for (i = 0; i < (80 - len) / 2; i++)
        printf(" ");
    printf("%s\n", str);
}

void wyrownaj_l(int n, char *str[]) {
    int i;
    for (i = 0; i < n; i++)
        printf("%-80s\n", str[i]);
}

void wyrownaj_r(int n, char *str[]) {
    int i, j, l;
    for (i = 0; i < n; i++)
        printf("%80s\n", str[i]);
}

void to_upper(char str[]) {
    int i, l = strlen(str);
    for (i = 0; i < l; i++)
        str[i] = toupper(str[i]);
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

int cmp(const void **s1, const void **s2) {
    return strcmp(*(const char**)s1, *(const char**)s2);
}

void sortStr(int n, char *strs[]) {
    qsort(strs, n, sizeof(char*), cmp);
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