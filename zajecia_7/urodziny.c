#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Torba{
    int cuk;
    int licznik;
} torba1;

void poczestunek (int ucz){
    srand((unsigned int) time(NULL));
    int m = 0;
    for(int i = 0; i < ucz; i ++){
        int t = rand()%5;
        if(t == 0){
            torba1.licznik = torba1.licznik - 2;
            m++;
        }
        else
        {
            torba1.licznik = torba1.licznik - 1;
            m++;
        }
        if(torba1.licznik <= 0){
            printf("Cukierki dostało %i osób, a nie dostało %i osób", m, ucz-m);
            break;
        }
    }
    exit;
}

int main(){
    srand((unsigned int) time(NULL));
    int ucz = rand()%30;
    torba1.cuk = ucz + ucz % 10;
    torba1.licznik = torba1.cuk;
    poczestunek(ucz);
}
