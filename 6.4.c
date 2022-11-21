#include <stdio.h>
#include <string.h>
#include <ctype.h>

int ile_razy_litera(char, char[]);
int ile_cyfr(char[]);

int main() {
    char c = 'a', zdanie[100];
    gets(zdanie);

    printf("litera %c wystapila %d razy\n", c, ile_razy_litera(c, zdanie));
    printf("cyfry wystapily %d razy\n", ile_cyfr(zdanie));
}


int ile_razy_litera(char litera, char zdanie[]) {
    int l = strlen(zdanie), lic = 0, i;
    for (i = 0; i < l; i++)
        if (tolower(litera) == tolower(zdanie[i]))
            lic++;

    return lic;
}

int ile_cyfr(char zdanie[]) {
    int l = strlen(zdanie), lic = 0, i;
    for (i = 0; i < l; i++)
        if (isdigit(zdanie[i]))
            lic++;

    return lic;
}