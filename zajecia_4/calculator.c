#include <stdio.h>
#include <stdint.h>

int conversion(char chara){
    if(chara == '+')
        return 1; 
    if(chara == '-')
        return 2;
    if(chara == '*')
        return 3;
    if(chara == '/')
        return 4;
}

int calculator(int a, char chara){
    int l = conversion(chara);
    enum character {S = 1, D, P, Q};
    enum character new = l; 
    switch (new)
    {
    case S :
        return a +10;
        break;
    case D :
        return a - 10;
        break;
    case P:
        return a * 10;
        break;
    default:
        return a / 10;
        break;
    }
}

int main()
{
    int a;
    char chara;
    scanf("%i %c", &a, &chara);
    printf("%i \n",  calculator (a, chara));
    return 0;
}