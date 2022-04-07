// implemnted by copilot
#ifndef HEAP_H
#define HEAP_H
#include <stdio.h>
#include <stdlib.h>
#define MAX 10
typedef char elemtype1;
typedef struct heap{
    elemtype1 *base;
    int top;
    int SIZE;
};

// initialize the heap
void initial_heap(heap *h){
    h->base = (elemtype1 *)malloc(sizeof(elemtype1)*MAX);
    h->top = 0;
    h->SIZE = MAX;
}

// insert a new element into the heap
void insert_heap(heap *h, elemtype1 e){
    if(h->top == h->SIZE){
        printf("heap is full\n");
        return;
    }
    h->base[h->top++] = e;
    int i = h->top - 1;
    while(i > 0 && h->base[i] > h->base[(i-1)/2]){
        elemtype1 temp = h->base[i];
        h->base[i] = h->base[(i-1)/2];
        h->base[(i-1)/2] = temp;
        i = (i-1)/2;
    }
}
// delete the root element of the heap
void delete_heap(heap *h){
    if(h->top == 0){
        printf("heap is empty\n");
        return;
    }
    h->base[0] = h->base[--h->top];
    int i = 0;
    while(2*i+1 < h->top){
        int j = 2*i+1;
        if(j+1 < h->top && h->base[j+1] > h->base[j])
            j++;
        if(h->base[i] >= h->base[j])
            break;
        elemtype1 temp = h->base[i];
        h->base[i] = h->base[j];
        h->base[j] = temp;
        i = j;
    }
}

#endif