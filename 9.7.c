#include <stdio.h>
#include <limits.h>

void dwa_max(int*, int*);

int main() {
    int max1, max2;
    dwa_max(&max1, &max2);
    printf("max1 = %d, max2 = %d\n", max1, max2);
}


void dwa_max(int *max1, int *max2) {
    int n, i, l;
    *max1 = *max2 = INT_MIN;
    printf("n: ");
    scanf("%d", &n);

    printf("n liczb: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &l);
        if (l > *max1) {
            *max2 = *max1;
            *max1 = l;
        } else if (l > *max2) {
            *max2 = l;
        }
    }
}