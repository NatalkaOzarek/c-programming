#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

typedef struct element
{
    int data;
    struct element * pnt_prev;
    struct element * pnt;
} type_element;

typedef struct list
{
    type_element * pnt_head;
    type_element * pnt_tail;
    int num_element;
} type_list;

type_list list;

void def_head(){
    type_element * head = NULL;
    head = (type_element *) malloc (sizeof(type_element));
    type_list list;
    head->pnt=NULL;
    list.pnt_head = head;
    list.num_element = 0;
}

type_element * find (int place){
    type_element* current = list.pnt_head;
    for (int i = 1; i <= place; i++)
    {
        current = current -> pnt;
    }
    return current;
}

void push (int number, int place){
    type_element * new;
    type_element * current = find (place - 1);
    type_element * temp = current -> pnt;
    new = (type_element*) malloc(sizeof(type_element));
    new -> data = number;
    current -> pnt = new;
    new -> pnt = temp;
}

void show (){
    type_element *current;
    type_element *next;
    current->pnt = list.pnt_head;
    while (current != NULL)
    {
        printf("%i ", current -> data);
        current = current -> pnt;
    }
    printf("\n");
}
void delete_all (type_list * List){
    type_element *current = List->pnt_head;
    for(int i = 1; i <= List -> num_element; i++){
        current = current -> pnt;
        free (current);
    }
}

void delete_first(type_list *List){
    type_element *first = List -> pnt_head;
    first = first -> pnt;
    free (first);
}
void delete_last(type_list *List){
    type_element *last = List -> pnt_tail;
    last = last -> pnt_prev;
    free (last);
}

void delete (int place) {
    type_element * previous = find(place - 1);
    type_element * old = previous->pnt;
    previous -> pnt = old -> pnt;
    free (old);
}

int main(){
    def_head();
    while (1)
    {
        char s;
        int a, b;
        scanf("%c",&s);
        if(s == 'I'){
            scanf("%d %d",&a, &b);
            push(a, b);
        }
        else if(s == 'D'){
            scanf("%d",&a);
            delete(a);
        }
        show();
    }
    
}
