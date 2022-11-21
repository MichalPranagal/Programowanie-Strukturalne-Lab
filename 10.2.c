#include <stdio.h>
#include <limits.h>
#define N 5

void wczytaj(int, int[]);
void wyswietl(int, int[]);
int suma(int, int[]);
int max(int, int[]);
int ileRazy(int, int[], int);

int main() {
    int i;
    int n, tab1[N], liczba;
    printf("n, liczba: ");
    scanf("%d%d", &n, &liczba);
    int tab2[n];

    printf("tab1: ");
    wczytaj(N, tab1);
    printf("tab2: ");
    for (i = 0; i < n; i++)
        scanf("%d", &tab2[i]);
    wczytaj(n, tab2);

    printf("tab1: ");
    wyswietl(N, tab1);
    printf("tab2: ");
    wyswietl(n, tab2);

    printf("suma tab1: %d\n", suma(N, tab1));
    printf("suma tab2: %d\n", suma(n, tab2));
    printf("max tab1: %d\n", max(N, tab1));
    printf("max tab2: %d\n", max(n, tab2));
    printf("ileRazy tab1: %d\n", ileRazy(N, tab1, liczba));
    printf("ileRazy tab2: %d\n", ileRazy(n, tab2, liczba));
}

void wczytaj(int n, int arr[]) {
    int i;
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
}

void wyswietl(int n, int arr[]) {
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int suma(int n, int arr[]) {
    int i, sum = 0;
    for (i = 0; i < n; i++)
        sum += arr[i];
    return sum;
}

int max(int n, int arr[]) {
    int i, mx = INT_MIN;
    for (i = 0; i < n; i++)
        mx = (arr[i] > mx) ? arr[i] : mx;
    return mx;
}

int ileRazy(int n, int arr[], int val) {
    int i, licznik = 0;
    for (i = 0; i < n; i++)
        if (arr[i] == val)
            licznik++;
    return licznik;
}
