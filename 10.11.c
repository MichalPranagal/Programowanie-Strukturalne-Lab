#include <stdio.h>

void symetryczna(int, int k, int[][k]);

int main() {
    int n, k, i, j;
    printf("n, k: ");
    scanf("%d%d", &n, &k);
    int tab[n][k];

    for (i = 0; i < n; i++)
        for (j = 0; j < k; j++)
            scanf("%d", &tab[i][j]);

    symetryczna(n, k, tab);
}

void symetryczna(int n, int k, int arr[][k]) {
    int i, j;
    if (k % 2 == 1) {
        for (i = 0; i < k / 2; i++) {
            for (j = 0; j < n; j++) {
                if (arr[j][i] != arr[j][k - 1 - i]) {
                    printf("tablica nie jest symetryczna wzgledem srodkowej kolumny\n");
                    return;
                }
            }
        }
        printf("tablica jest symetryczna wzgledem srodkowej kolumny\n");
    } else {
        for (i = 0; i < k; i++) {
            if (arr[0][i] != arr[n - 1][i]) {
                printf("brzegowe wiersze nie sa takie same\n");
                return;
            }
        }
        printf("brzegowe wiersze sa takie same\n");
    }
}
