#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define MIN(a, b) ((a < b) ? a : b)
#define MAX(a, b) ((a > b) ? a : b)

double* stworz_1d(int);
void wczytaj_1d(int, double*);
void wyswietl_1d(int, double*);
double suma_1d(int, double*);
double srednia_1d(int, double*);
double min_1d(int, double*);
double max_1d(int, double*);
int licz_1d(int, double, double*);
void inkrementacja_1d(int, int, double*);
double** stworz_2d(int, int);
void wczytaj_2d(int, int, double**);
void wyswietl_2d(int, int, double**);
double suma_2d(int, int, double**);
double srednia_2d(int, int, double**);
double min_2d(int, int, double**);
double max_2d(int, int, double**);
int licz_2d(int, int, double, double**);
void inkrementacja_2d(int, int, int, int, double**);
void usun_2d(int, double***);


double* stworz_1d(int n) {
    double *arr = (double*) malloc(n * sizeof(double));
    return arr;
}

void wczytaj_1d(int n, double *arr) {
    int i;
    for (i = 0; i < n; i++)
        scanf("%lf", &arr[i]);
}

void wyswietl_1d(int n, double *arr) {
    int i;
    for (i = 0; i < n; i++)
        printf("%lf ", arr[i]);
    printf("\n");
}

double suma_1d(int n, double *arr) {
    int i;
    double sum = 0;
    for (i = 0; i < n; i++)
        sum += arr[i];
    
    return sum;
}

double srednia_1d(int n, double *arr) {
    return suma_1d(n, arr) / n;
}

double min_1d(int n, double *arr) {
    int i;
    double min_ = __DBL_MAX__;
    for (i = 0; i < n; i++)
        min_ = MIN(min_, arr[i]);
    
    return min_;
}

double max_1d(int n, double *arr) {
    int i;
    double max_ = __DBL_MIN__;
    for (i = 0; i < n; i++)
        max_ = MAX(max_, arr[i]);
    
    return max_;
}

int licz_1d(int n, double val, double *arr) {
    int i;
    int lic = 0;
    for (i = 0; i < n; i++)
        if (arr[i] == val)
            lic++;
    
    return lic;
}

void inkrementacja_1d(int n, int id, double *arr) {
    if (0 <= id && id < n)
        arr[id]++;
}

double** stworz_2d(int n, int m) {
    int i;
    double** arr = (double**) malloc(n * sizeof(double*));
    for (i = 0; i < n; i++)
        arr[i] = stworz_1d(m);

    return arr;
}

void wczytaj_2d(int n, int m, double **arr) {
    int i;
    for (i = 0; i < n; i++)
        wczytaj_1d(m, arr[i]);
}

void wyswietl_2d(int n, int m, double **arr) {
    int i;
    for (i = 0; i < n; i++)
        wyswietl_1d(m, arr[i]);
}

double suma_2d(int n, int m, double **arr) {
    int i;
    double sum = 0;
    for (i = 0; i < n; i++)
        sum += suma_1d(m, arr[i]);

    return sum;
}

double srednia_2d(int n, int m, double **arr) {
    return suma_2d(n, m, arr) / (n * m);
}

double min_2d(int n, int m, double **arr) {
    int i;
    double min_ = __DBL_MAX__;
    for (i = 0; i < n; i++)
        min_ = MIN(min_, min_1d(m, arr[i]));
    
    return min_;
}

double max_2d(int n, int m, double **arr) {
    int i;
    double max_ = __DBL_MIN__;
    for (i = 0; i < n; i++)
        max_ = MAX(max_, max_1d(m, arr[i]));
    
    return max_;
}

int licz_2d(int n, int m, double val, double **arr) {
    int i;
    int lic = 0;
    for (i = 0; i < n; i++)
        lic += licz_1d(n, val, arr[i]);
    
    return lic;
}

void inkrementacja_2d(int n, int m, int idn, int idm, double **arr) {
    if (0 <= idn && idn < n &&
        0 <= idm && idm < m)
        arr[idn][idm]++;
}

void usun_2d(int n, double ***arr) {
    int i;
    for (i = 0; i < n; i++)
        free((*arr)[i]);
    free(*arr);
}
