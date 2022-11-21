#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
#define N 5

void losuj(int, int*);
int min(int, int*);
double srednia(int, int*);
int ileRazy2(int, int*, int);
void wyswietl(int n, int *arr); 

int main() {
    int n, liczba;
    int tab3[N] = {1, 2, 3, 4, 5},
        tab4[] = {6, 5, 4, 2, 1, 3};

    srand(time(NULL));
    printf("n, liczba: ");
    scanf("%d%d", &n, &liczba);
    int tab5[n];


    losuj(N, tab3);
    losuj(sizeof(tab4) / sizeof(tab4[0]), tab4);
    losuj(n, tab5);

    printf("tab3: ");
    wyswietl(N, tab3);
    printf("tab4: ");
    wyswietl(sizeof(tab4) / sizeof(tab4[0]), tab4);
    printf("tab5: ");
    wyswietl(n, tab5);

    printf("min tab3: %d\n", min(N, tab3));
    printf("min tab4: %d\n", min(n, tab4));
    printf("min tab5: %d\n", min(n, tab5));
    printf("srednia tab3: %lf\n", srednia(N, tab3));
    printf("srednia tab4: %lf\n", srednia(n, tab4));
    printf("srednia tab5: %lf\n", srednia(n, tab5));
    printf("ileRazy2 tab3: %d\n", ileRazy2(N, tab3, liczba));
    printf("ileRazy2 tab4: %d\n", ileRazy2(n, tab4, liczba));
    printf("ileRazy2 tab5: %d\n", ileRazy2(n, tab5, liczba));
}

void losuj(int n, int *arr) {
    int i;

    for (i = 0; i < n; i++)
        arr[i] = rand() % 10;
}

int min(int n, int *arr) {
    int i, mi = INT_MAX;
    for (i = 0; i < n; i++)
        mi = (arr[i] < mi) ? arr[i] : mi;
    return mi;
}

double srednia(int n, int *arr) {
    int i, sum = 0;
    for (i = 0; i < n; i++)
        sum += arr[i];
    return (double) sum / n;
}

int ileRazy2(int n, int *arr, int val) {
    int i, licznik = 0;
    for (i = 0; i < n; i++)
        if (arr[i] == val)
            licznik++;
    return licznik;
}

void wyswietl(int n, int *arr) {
    int i;
    for (i = 0; i < n; i++) 
        printf("%d ", arr[i]);
    printf("\n");
}