#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sortStr(int, char*[]);

int main() {
    int i;
    char *str[5];

    for (i = 0; i < 5; i++) {
        str[i] = (char*) malloc(4 * sizeof(char));
        scanf("%3s", str[i]);
    }

    sortStr(5, str);
    for (i = 0; i < 5; i++)
        printf("%s\n", str[i]);

    for (i = 0; i < 5; i++)
        free(str[i]);
}


int cmp(const void **s1, const void **s2) {
    return strcmp(*(const char**)s1, *(const char**)s2);
}

void sortStr(int n, char *str[]) {
    qsort(str, n, sizeof(char*), cmp);
}
