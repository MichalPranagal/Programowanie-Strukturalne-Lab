#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
#define MAX(a, b) ((a > b) ? a : b)
#define MIN(a, b) ((a < b) ? a : b)

struct Student {
    char imie[100], nazwisko[100];
    int numerek;
};

int main() {
    int i, n, id, max_ = -1, min_diff = INT_MAX;
    double srednia = 0;
    srand(time(NULL));
    printf("n: ");
    scanf("%d", &n);
    struct Student studenci[n];

    for (i = 0; i < n; i++) {
        scanf("%s%s", studenci[i].imie, studenci[i].nazwisko);
        studenci[i].numerek = rand() % 10000;
        srednia += studenci[i].numerek;
        max_ = MAX(max_, studenci[i].numerek);
    }
    srednia /= n;

    printf("Student(studenci) z największym numerkiem (%d): \n", max_);
    for (i = 0; i < n; i++) {
        if (studenci[i].numerek == max_)
            printf("%s %s\n", studenci[i].imie, studenci[i].nazwisko);

        min_diff = MIN(min_diff, abs(srednia - studenci[i].numerek));
    }
    
    printf("Student(studenci) z numerkami najblizszymi sredniej (%lf): \n", srednia);
    for (i = 0; i < n; i++)
        if(abs(srednia - studenci[i].numerek) == min_diff)
            printf("%s %s (%d)\n", studenci[i].imie, studenci[i].nazwisko, studenci[i].numerek);
}