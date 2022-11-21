#include <stdio.h>
#define MAX(a, b) (a > b ? a : b)

int max();

int main() {
    printf("%d\n", max());
}


int max() {
    int num, max_ = -1;

    do {
        scanf("%d", &num);
        max_ = MAX(max_, num);
    } while (num != -1);

    return max_;
}