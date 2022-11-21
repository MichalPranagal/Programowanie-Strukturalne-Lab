#include <stdio.h>
#define FALSE 0
#define TRUE !(FALSE)

int wszyscy_zdali(int, int[]);

int main() {
    int oceny[] = {3, 5, 4, 4, 3, 4, 4, 5, 5, 3};
    int n = sizeof(oceny) / sizeof(oceny[0]);

    if (wszyscy_zdali(n, oceny))
        printf("wszyscy zdali\n");
    else
        printf("nie wszyscy zdali\n");
}

int wszyscy_zdali(int n, int oceny[]) {
    int i;
    for (i = 0; i < n; i++)
        if (oceny[i] < 3)
            return FALSE;
    return TRUE;
}