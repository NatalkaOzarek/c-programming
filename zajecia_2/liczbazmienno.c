#include <stdio.h>

int main(){
    int liczba, liczba2;
    scanf("%i", &liczba);
    liczba2 = liczba % 100;
    liczba = (liczba - liczba2)/100;
    printf ("%i \n", liczba);
    return 0;
}