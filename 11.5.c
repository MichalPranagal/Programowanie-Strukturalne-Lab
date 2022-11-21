#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void losuj(int, int*);
int licz_a_b(int, int*, int, int);
int* nowatabDyn(int*, int, int, int, int*);
void wyswietl(int, int*);

int main() {
    int i, a, b, lic;
    int tabS[100], *tabD;
    srand(time(NULL));

    losuj(100, tabS);
    printf("a, b: ");
    scanf("%d%d", &a, &b);
    lic = licz_a_b(100, tabS, a, b);
    tabD = nowatabDyn(tabS, 100, a, b, &lic);

    wyswietl(100, tabS);
    wyswietl(lic, tabD);

    free(tabD);
}

void losuj(int n, int *arr) {
    int i;
    for (i = 0; i < n; i++)
        arr[i] = rand() % 100 + 1;
}

int licz_a_b(int n, int *arr, int a, int b) {
    int i, lic = 0;
    for (i = 0; i < n; i++)
        if (a <= arr[i] && arr[i] <= b)
            lic++;

    return lic;
}

int* nowatabDyn(int *tabS, int n, int a, int b, int *m) {
    int i, j = 0;
    int *tabD = malloc(*m * sizeof(int));

    for (i = 0; i < n; i++)
        if (a <= tabS[i] && tabS[i] <= b)
            tabD[j++] = tabS[i];

    return tabD;
}

void wyswietl(int n, int *arr) {
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
