#ifndef MYLINKEDLIST_H
#define MYLINKEDLIST_H
#include <stdlib.h>
#include <stdio.h>
typedef int elemtype;
typedef struct node{
    elemtype data;
    node *next;
}Head;

void initial_ls(Head *h){
    h->next = NULL; // h->next = h;
}

int isEmpty(Head *h){
    if(!h->next) // h->next == h
        return 1;
    return 0;
}

void insert_First(Head *h, elemtype e){
    Head *s = (Head *)malloc(sizeof(Head));
    s->data = e;
    s->next = h->next;
    h->next = s;
}

void display_ls(Head *h){
    Head *p = h->next;
    while(p){ // p!=h
        printf("%d\n", p->data);
        p = p->next;
    }
}

elemtype remove_first(Head *h){
    if(isEmpty(h))
        exit(0);
    Head *p = h->next; 
    elemtype e = p->data;
    h->next = p->next; // h->next = h->next->next;
    free(p);
    return e;
}

#endif