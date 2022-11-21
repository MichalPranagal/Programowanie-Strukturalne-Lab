#include <stdio.h>
#define MAX(a, b) ((a > b) ? a : b)
void srednie();

int main() {
    srednie();
}


void srednie() {
    double sum_p = 0, sum_n = 0;
    int l_p = 0, l_n = 0, num;

    do {
        scanf("%d", &num);
        if (num != 0 && num % 2 == 0) {
            sum_p += num;
            l_p++;
        }
        else if (num % 2 == 1) {
            sum_n += num;
            l_n++;
        }
    } while (num != 0);

    printf("srednia liczb parzystych = %lf\n", sum_p / MAX(1, l_p));
    printf("srednia liczb nieparzystych = %lf\n", sum_n / MAX(1, l_n));

}