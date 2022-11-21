#include <stdio.h>

int suma_cyfr(int);
int jest_szczesliwa(int);

int main() {
    int num = 123123;

    if (jest_szczesliwa(num))
        printf("bilet nr. %d jest szczesliwy\n", num);
    else
        printf("bilet nr. %d nie jest szczesliwy\n", num);
}


int suma_cyfr(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }

    return sum;
}

int jest_szczesliwa(int num) {
    return suma_cyfr(num / 1000) == suma_cyfr(num % 1000);
}