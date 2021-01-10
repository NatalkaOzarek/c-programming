#include <stdio.h>

int main(){
    for(int i = 0; i <= 100; ++i){
        if(i % 6 == 0){
            printf("%i ", i);
        }
    }
    return 0;
}
