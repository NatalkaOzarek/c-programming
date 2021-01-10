#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

double k[5];

struct czlowiek
{
    char imie [20];
    int waga;
    double promile;
} c[5];

struct alkohol
{
    int procent;
    char nazwa[20];
} a[4];

//void krew (){
    
  //  for (int i = 0; i < 5; i++)
    
    //    int l = (c + i)->waga;
    //    *(k + i) = (double)l * 0.080;
    
    //return k;  // wskaźnik na tablicę z ilością krwi każdego z ludzi
//}
void kolejka  (int l, int ko){ //  ko kolejki; l alkohol wybrany(indeks w tablicy wsk2));
      //krew();
      int x = (a + l)->procent;// to procenty w wybranym alkoholu (liczba całkowita!!)
      double kiel = 0.05;
      double j = (ko * kiel * x)*10; // zawartość czytsego alkoholu w wypitych kolejkach(zrobić dzielenie zmiennoprzecinkowe)
      printf("%i %lf", x, j);
      for (int i = 0; i < 5; i++)
    {
        (c + i)->promile = (c + i)->promile + (j / c[i].waga);
    }
}
int* odlecieli (int t[5]){ // zwraca wskaźnik na wartość tablicę w wartości 1 lub 0;
    //int t[4];
    for(int i = 0; i < 5; i++){
        if ((c + i)->promile >= 2){
            t[i] = 1; 
        }
        else
        {
            t[i] = 0;
        }
    }
    return t;
}
int main(){
    printf ("Wprowadź 5 członków załogi: imię, waga, promile na wejściu");
       for(int i = 0; i < 5; i++){
           scanf("%s %i %lf", c[i].imie, &c[i].waga, &c[i].promile);
       }
    printf("Wprowadź 4 różne trunki: procent, nazwa");
        for(int i = 0; i < 4; i++){
           scanf("%i %s", &a[i].procent, a[i].nazwa);
        }
      // krew();
        //for(int i = 0; i < 5; i++){
       //    printf("%f \n", k[i]);
    //    }
     srand((unsigned int) time(NULL)); 
   
    for (int i = 0; i < 3; i++)
    {
        int l = rand()%4; //alkohole
        int kol = rand()%5; //kolejki
        int t[5];
        kolejka(l, kol);
        int* k = odlecieli(t);
        printf ("kolejki : %i, alkohol : %s \n", kol, a[l].nazwa);
        for (int i = 0; i < 5; i++)
        {
            printf("%s ma %lf i jego stan to %i\n", c[i].imie, c[i].promile, *(k + i));
        }
    }
}