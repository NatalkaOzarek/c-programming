#include <stdio.h>

int main(){
    int liczba1;
    int liczba2;
    scanf("%i %i", &liczba1, &liczba2);
    printf("%i przy podzieleniu przez %i daje resztę %i \n" , liczba1, liczba2, liczba1%liczba2);
    int a, b, c;
    scanf ("%i %i %i", &a, &b, &c);
    printf ("Iloczyn trzech podanych liczb jest równy %i \n" , a*b*c);
    return 0;
}