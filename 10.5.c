#include <stdio.h>
#define N 5

void copy1(int[], int[], int);
void copy2(int*, int*, int);
void wyswietl(int[], int);

int main() {
    int tab1[N] = {1, 2, 3, 4, 5}, tab2[N], tab3[N];

    copy1(tab2, tab1, N);
    copy2(tab3, tab1, N);

    printf("tab2: ");
    wyswietl(tab2, N);
    printf("tab3: ");
    wyswietl(tab2, N);
}

void copy1(int dest[], int src[], int n) {
    int i;
    for (i = 0; i < n; i++) 
        dest[i] = src[i];
}

void copy2(int *dest, int *src, int n) {
    int i;
    for (i = 0; i < n; i++) 
        *(dest + i) = *(src + i);
}

void wyswietl(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}