#include <stdio.h>
#include <stdlib.h>

int menu();
void zamien_min_max(int, double[]);
void reverse(int, double[]);
double* tablica_kwadratow(int, double[]);
double* tablica_szescianow(int, double[]);
void swap(double*, double*);
void wyswietl(int, double[]);

int main() {
    int opt;
    double tab[] = {5, 4.23, 6, 5.31, 9.13411, 66, 2346, 10694578.5616};
    int n = sizeof(tab) / sizeof(tab[0]);
    double *Y, *Z;

    do {
        opt = menu();

        switch (opt) {
            case 0:
                return 0;
                break;

            case 1:
                zamien_min_max(n, tab);
                printf("tab: ");
                wyswietl(n, tab);
                break;
            
            case 2:
                reverse(n, tab);
                printf("tab: ");
                wyswietl(n, tab);
                break;

            case 3:
                Y = tablica_kwadratow(n, tab);
                Z = tablica_szescianow(n, tab);
                printf("Y: ");
                wyswietl(n, Y);
                printf("Z: ");
                wyswietl(n, Z);
                break;

            default:
                printf("niepoprawna opcja\n");
        }
    } while (opt != 0);

}

int menu() {
    int opt;
    printf("wybierz opcje:\n");
    printf("1. zamien miejscami min z max\n");
    printf("2. zapisz elementy tablicy w odwrotnej kolejnosci\n");
    printf("3. utworz tablice z kwadratami i szescianami\n");
    printf("0. zakoncz\n\n");
    scanf("%d", &opt);
    return opt;
}

void zamien_min_max(int n, double arr[]) {
    int i;
    double *max_ = NULL, *min_ = NULL;

    for (i = 0; i < n; i++) {
        if (max_ == NULL || arr[i] > *max_)
            max_ = &arr[i];
        if (min_ == NULL || arr[i] < *min_)
            min_ = &arr[i];
    }

    swap(max_, min_);
}

void reverse(int n, double arr[]) {
    int i;
    for (i = 0; i < n / 2; i++)
        swap(&arr[i], &arr[n - i - 1]);
}

double* tablica_kwadratow(int n, double arr[]) {
    int i;
    double *arr2 = (double*) malloc(n * sizeof(double));
    for (i = 0; i < n; i++) 
        arr2[i] = arr[i] * arr[i];
    
    return arr2;
}

double* tablica_szescianow(int n, double arr[]) {
    int i;
    double *arr3 = (double*) malloc(n * sizeof(double));
    for (i = 0; i < n; i++) 
        arr3[i] = arr[i] * arr[i] * arr[i];
    
    return arr3;
}

void swap(double *a, double *b) {
    double temp = *a;
    *a = *b;
    *b = temp;
}

void wyswietl(int n, double arr[]) {
    int i;
    for (i = 0; i < n; i++)
        printf("%lf ", arr[i]);
    printf("\n");
}