#include <stdio.h>
#include <ctype.h>

void sprawdz_znak(char);

int main() {
    printf("znak: ");
    char c = getchar();
    sprawdz_znak(c);
}


void sprawdz_znak(char c) {
    printf("znak %c:\n", c);

    if (c != '$')   printf("nie ");
    printf("jest znakiem dolara\n");

    if (!isalpha(c) || c != tolower(c))    printf("nie ");
    printf("jest mala litera angielskiego alfabetu\n");

    if (!isalpha(c) || c != toupper(c))    printf("nie ");
    printf("jest duza litera angielskiego alfabetu\n");

    if (!isdigit(c))    printf("nie ");
    printf("jest cyfra\n");

    if (c != '+' && c != '-' && c != '*' && c != '/')   printf("nie ");
    printf("jest znakiem dzialania postawowych operacji arytmetycznych");
}
