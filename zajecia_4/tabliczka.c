#include <stdio.h>

int main(){
    int a  = 1, b = 1;
    for (a; a < 11; ++a){
        for (b; b < 11; ++b){
             printf ("% 3i  ", a*b);
            // if(a * b < 10     
            // else
            //     printf  ("%i ", a*b);
        }
        b = 1;
        printf ("\n");
    }
    return 0;
}