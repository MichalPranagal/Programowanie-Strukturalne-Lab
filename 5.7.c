#include <stdio.h>

void kwartal_dni(int);

int main() {
    int month = 11;

    kwartal_dni(month);
}


void kwartal_dni(int month) {
    if (month <= 0 || month > 12) {
        printf("Niepoprawny numer miesiaca\n");
        return;
    }
    else if (month < 4)
        printf("I ");
    else if (month < 7)
        printf("II ");
    else if (month < 10)
        printf("III ");
    else
        printf("IV ");
    printf("kwartal, ");

    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("31 ");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("30 ");
            break;
        case 2:
            printf("28 lub 29 ");
    }
    printf("dni\n");
}