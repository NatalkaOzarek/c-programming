#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct number{int n; int m;};

int add(void *k){
    int l = 0;
    l = *(int*)k + 10;
    return l; 
}


int main(){
    struct number number1;
    int l;
    scanf("%i", &l);
    scanf("%i %i", &number1.n, &number1.m);
    void* k = &l;
    void* g = &number1.n;
    int m = add(k);
    int u = add(g);
    printf("%i\n%i\n", m, u);
}
