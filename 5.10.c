#include <stdio.h>

void stypendium(int[]);

int main() {
    int oceny[] = {4, 4, 5};
    stypendium(oceny);
}


void stypendium(int oceny[]) {
    double srednia = 0;
    int i;

    for (i = 0; i < 3; i++) {
        if (oceny[i] < 3) {
            printf("nie przyznano stypendium\n");
            return;
        }
        srednia += oceny[i];
    }

    srednia /= 3;
    if (srednia > 4)
        printf("przyznano 500zl stypendium\n");
    else
        printf("przyznano 300zl stypendium\n");


}