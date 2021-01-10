#include <stdio.h>

int main(){
    int k;
    scanf ("%i",&k);
    for (int i = 2; i < k; i++){
        if(k % i == 0){
            printf ("Nie jest pierwsza \n");
            return 0;
        }
    }
    printf("Jest pierwsza \n");
    return 0;
}
