#include <stdio.h>

int jest_rosnacy(int n);

int main() {
    int n = 6;
    printf("%d\n", jest_rosnacy(n));
}


int jest_rosnacy(int n) {
    int l, p_l, rosn = 1, i = n - 1;
    scanf("%d", &l);

    while (i--) {
        p_l = l;
        scanf("%d", &l);
        if (l <= p_l)
            rosn = 0;
    }

    return rosn;
}
