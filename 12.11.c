#include "12.11.h"

int main() {
    char str[] = "Pojedyczny string\n";
    char *z, *o;
    char *str_tab[] = {
        "Kilka",
        "Stringow",
        "w tablicy"
    };

    *z = zaszyfruj(str);
    wysrodkuj(z);
    sortStr(3, str_tab);

    wyrownaj_l(sizeof(str_tab) / sizeof(str_tab[0]), str_tab);
    wyrownaj_r(sizeof(str_tab) / sizeof(str_tab[0]), str_tab);

    *o = odszyfruj(z);
    to_upper(o);
    wysrodkuj(o);

    printf("program zakonczy sie gdy wpiszesz 'quit'\n");
    zakoncz_gdy_quit();

    free(z);
    free(o);
}