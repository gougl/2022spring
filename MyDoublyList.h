#ifndef MYDOUBLYLIST_H
#define MYDOUBLYLIST_H

typedef int elemtype;
typedef struct node1{
    elemtype data;
    node1 *prior, *next;
}dnode;

void initial_dls(dnode *h){
    h->next = h;
    h->prior = h;
}

void isEmpty_dls(dnode *h){
    if(h->next == h)
        return 1;
    return 0;
}

#endif