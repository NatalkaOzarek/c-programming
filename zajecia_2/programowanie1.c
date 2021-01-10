#include <stdio.h>

int main(){
    int a = 0;
    printf("%i \n", a);
    {
        int a = 3 ;
        {
            double a =1.2;
            {
                int a = 5;
                printf ("%i \n", a);
            }
            printf ("%e \n", a);
        }
            printf("%i \n", a);
    }
    return 0;
}